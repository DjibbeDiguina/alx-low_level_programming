#include "main.h"

void more_numbers(void) {
    int i, j;

    for (j = 0; j < 10; j++) {
        for (i = 0; i <= 14; i++) {
            _putchar(i + '0');
        }
        _putchar('\n');
    }
    _putchar('\n');
}

