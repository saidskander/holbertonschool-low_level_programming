/**
 * flip_bits - flip_bits
 * @n : unsigned long int n
 * @m : unsigned long int m
 * Return: x
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int l;
int x;
l = n ^ m;
for (x = 0; l >= 1;)
{
if ((l & 1) == 1)
x++;
l >>= 1;
}
return (x);
}
