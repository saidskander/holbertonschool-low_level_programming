#include "variadic_functions.h"
/**
 * print_numbers - print_numbers.
 * @separator : const char
 * @n : unsigned int
 * Return: pn.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int x;
va_list pn;
va_start(pn, n);
for (x = 0; x < n; x++)
{
printf("%d", va_arg(pn, int));
if (x < n - 1 && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(pn);
}
