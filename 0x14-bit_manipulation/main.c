#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0.
 */

int main(void)
{
int num1 = 0;
int num2 = 1;
int num3 = 98;
int num4 = 1024;
int num5 = (1 << 10) + 1;

printf("%d in binary: ", num1);
print_binary(num1);
printf("\n");

printf("%d in binary: ", num2);
print_binary(num2);
printf("\n");

printf("%d in binary: ", num3);
print_binary(num3);
printf("\n");

printf("%d in binary: ", num4);
print_binary(num4);
printf("\n");

printf("%d in binary: ", num5);
print_binary(num5);
printf("\n");

return (0);
}
