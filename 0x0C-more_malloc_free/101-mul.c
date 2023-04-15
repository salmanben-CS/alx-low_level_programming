#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * is_digit - checks if a string is composed only of digits
 * @str: the string to check
 *
 * Return: 1 if the string is composed only of digits, 0 otherwise
 */
int is_digit(char *str)
{
    while (*str)
    {
        if (*str < '0' || *str > '9')
            return (0);
        str++;
    }
    return (1);
}

/**
 * multiply - multiplies two positive numbers
 * @num1: the first number
 * @num2: the second number
 *
 * Return: the result of the multiplication
 */
char *multiply(char *num1, char *num2)
{
    int len1 = 0, len2 = 0, i, j, k, carry = 0, digit = 0;
    char *result = NULL;

    while (num1[len1])
        len1++;

    while (num2[len2])
        len2++;

    result = calloc(len1 + len2 + 1, sizeof(char));

    if (!result)
        return (NULL);

    for (i = len1 - 1; i >= 0; i--)
    {
        carry = 0;
        for (j = len2 - 1; j >= 0; j--)
        {
            digit = (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1] + carry;
            carry = digit / 10;
            result[i + j + 1] = (digit % 10) + '0';
        }
        result[i] += carry;
    }

    for (k = 0; k < len1 + len2; k++)
    {
        if (result[k] != '0')
            break;
    }

    if (k == len1 + len2)
        return ("0");

    for (i = 0; k <= len1 + len2; i++, k++)
        result[i] = result[k];

    return (result);
}

/**
 * main - entry point
 * @argc: the number of arguments
 * @argv: an array of arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
    if (argc != 3)
    {
        printf("Error\n");
        return (98);
    }

    if (!is_digit(argv[1]) || !is_digit(argv[2]))
    {
        printf("Error\n");
        return (98);
    }

    char *result = multiply(argv[1], argv[2]);
    if (!result)
        return (98);

    printf("%s\n", result);
    free(result);

    return (0);
}

