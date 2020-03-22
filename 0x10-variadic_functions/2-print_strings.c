#include "variadic_functions.h"
/**
 * print_strings - print_strings.
 * @separator : const char.
 * @n : unsigned int.
 * Return: ps.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int x;
va_list ps;
char *m;
va_start(ps, n);
for (x = 0; x < n; x++)
{
m = va_arg(ps, char *);
if (m == NULL)
printf("(nil)");
else
printf("%s", m);
if (separator == NULL || x + 1 == n)
separator = "";
else
printf("%s", separator);
}
printf("\n");
va_end(ps);
}
