#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* more headers goes there */

/* betty style doc for function main goes there */
/* The function generates  random integer between -RAND_MAX/2 and RAND_MAX/2.*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* check n */
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is zero\n", n);
}

return (0);
}

