#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main -Entry point
 * Return: always 0.
 */
int main(void)
{
int q, w, e;
for (q = 0; q < 9; q++)
{
for (w = q + 1; w <= 9; w++)
{
for (e = w + 1; e <= 9; e++)
{
if((w != q) || ! e)
{
putchar(q);
putchar(w);
putchar(e);
if (q == 7 && w == 8)
continue;
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
