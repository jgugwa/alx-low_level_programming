#include "main.h"

/**
 * print_number - Function that prints an integer.
 * @n: int type number
 * Description: Can only use _putchar to print.
 * do not use long
 */

/* introduce custome putcher function */
void _putchar(char y) {
    putchar(y);
}

/* we basically have to apply the rucursive straytegy */
void print_ind_digits(int n) {
    if (n == 0) {
        return (0);
    }
    print_ind_digits(n / 10);
    _putchar('0' + (n % 10));
}

/*  define a function  to print the integer */
void print_number(int n) {
    /* Handle negative numbers */
    if (n < 0) {
        _putchar('-');
        n = -n;
    }
    /* zero to  be handled as a special case */
    if (n == 0) {
        _putchar('0');
    }
    else {
        print_ind_digits(n);
    }
}
