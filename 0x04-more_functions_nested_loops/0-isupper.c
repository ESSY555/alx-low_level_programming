int _putchar(char c);
int _isupper(int c);
int _isdigit(int c);
int mul(int a, int b);
void print_numbers(void);
void print_most_numbers(void);
void more_numbers(void);
void print_line(int n);
void print_diagonal(int n);
void print_square(int size);
void print_triangle(int size);
void print_number(int n);
#include "main.h"

/**
 * _isupper - check for upper case letter
 * @c : character to check the case
 * Return:0 or 1
 */

int _isupper(int c)
{
    return (c >= 65 && c <= 90);

}
