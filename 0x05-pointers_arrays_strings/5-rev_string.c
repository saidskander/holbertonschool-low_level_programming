#include "holberton.h"
/**
 * rev_string - check the code for Holberton School students.
 * @s :input
 * Return: .
 */
void rev_string(char *s)
{
	int i;
	char x;
	int j = 0;

	for (i = 0; s[i] != '\0'; i++)
		;
	i = i - 1;
	for (j = 0; j <= i / 2; j++)
	{
		x = s[i - j];
		s[i - j] = s[j];
		s[j] = x;
	}
}
