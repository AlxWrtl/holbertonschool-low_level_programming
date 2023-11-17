#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_char(va_list data_list) {
    printf("%c", va_arg(data_list, int));
}

void print_int(va_list data_list) {
    printf("%d", va_arg(data_list, int));
}

void print_float(va_list data_list) {
    printf("%f", va_arg(data_list, double));
}

void print_string(va_list data_list) {
    char *string = va_arg(data_list, char *);
    printf("%s", string ? string : "(nil)");
}

void print_all(const char * const format, ...) {
    va_list data_list;
    va_start(data_list, format);

    const char *separator = "";

    for (int i = 0; format && format[i]; ++i) {
        printf("%s", separator);
        switch (format[i]) {
            case 'c':
                print_char(data_list);
                break;
            case 'i':
                print_int(data_list);
                break;
            case 'f':
                print_float(data_list);
                break;
            case 's':
                print_string(data_list);
                break;
            default:
                // Handle unsupported format specifiers if needed
                break;
        }
        separator = ", ";
    }

    va_end(data_list);
    printf("\n");
}