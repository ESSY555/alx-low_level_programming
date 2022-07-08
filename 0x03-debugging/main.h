#ifndef main.h-H
#define main.h-H

#include <stdio.h>

void positive_or_negative(int);
int largest_number(int a, int b, int c);
void print_remaining_days(int month, int day, int year);
int convert_day(int month, int day);

#endif /* main.h_H */
#include "main.h"

/**
 * main - Test  function for positive or negative
 * Return: 0
 */

int main(void)
{
int i;

i = 0;

positive_or_negative(i);
return (0);
}
