#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
/**
* main - main entry.
*
* Return: Always 0
*/
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
char num_str[20];
itoa(n,num_str,10);
char last_char=num_str[strlen(num_str)-1];
int last_digit=atoi(&last_char);
char* message="Last digit of ";
char* message2=" and is ";

printf("%s%d%s",message,n,message2);

int last_digit=abs(n)%10;
char* message="Last digit of ";
char* message2=" and is ";

printf("%s%d%s",message,n,message2);

if(last_digit>5)
{
printf("greater than 5\n");
}
else if(last_digit==0)
{
printf("0\n");
}
else
{
printf("less than 6 and not 0\n");
}
return 0;
}
