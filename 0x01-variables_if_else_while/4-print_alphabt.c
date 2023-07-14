#include<stdio.h>
/**
 * main -Entry point
 * Return: alwaays 0.
 */
int main(void)
{
int g = 97;
while (g <= 122)
{
if (g == 101 || g == 113)
{
g++;
continue;
}
putchar(g);
g++;
}
putchar('\n');
return (0);
}
New
00:32
that is nbr 0
00:32
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints whether a randomly generated.
 *
 * number is positive, zero, or negative.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}
00:33
that is nbr 5
00:33
#include<stdio.h>
/**
 * main - main function khabibulah wake up
 * Return: always 0.
 */
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
printf("%d", i);
}
printf("\n");
return (0);
}
