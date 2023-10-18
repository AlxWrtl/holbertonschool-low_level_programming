#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"

void times_table(void)
{
    for (int multi = 0; multi <= 9; multi++) {
        for (int nbr = 0; nbr <= 9; nbr++) {
            int result = multi * nbr;

            if (result >= 10) {
                _putchar(result / 10 + '0');
                _putchar(result % 10 + '0');
            } else {
                _putchar(' ');
                _putchar(result + '0');
            }

            if (nbr < 9) {
                _putchar(',');
                _putchar(' ');
            }
        }
        _putchar('\n');
    }
}



