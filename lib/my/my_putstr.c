/*
** EPITECH PROJECT, 2021
** my_putstr
** File description:
** my_putstr
*/

#include "fibonacci_checker.h"

void my_putstr(char const *str)
{
    int index = 0;

    if (!str)
        return NULL;
    while (str[index] != '\0') {
        my_putchar(str[index]);
        if (str[index] == '\t') {
            my_putchar(' ');
            index += 1;
        }
        index += 1;
    }
}
