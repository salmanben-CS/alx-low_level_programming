/**
* main - main entry.
*
* Return: Always 0
*/
/* more headers goes there */

/* betty style doc for function main goes there */
/* The function generates  random integer between -RAND_MAX/2 and RAND_MAX/2.*/
int main(void)
{
int i, j, k;
for (i = 48; i <= 57; ++i)
{
for (j = i + 1; j <= 57; ++j)
{
for (k = j + 1; k <= 57; ++k)
{
putchar(i);
putchar(j);
putchar(k);
if (i == 55 && j == 56 && k== 57)
{
putchar('\n');
break;
}
putchar(',');
putchar(' ');
}
}
}
return (0);
}
