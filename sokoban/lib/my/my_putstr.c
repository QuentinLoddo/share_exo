/*
** EPITECH PROJECT, 2022
** my_putstr
** File description:
** my_putstr
*/

#include "sokoban.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_strlen(char *str)
{
    int index = 0;

    while(str[index] != '\0') {
        index++;
    }
    return index;
}

void my_putstr(char *str)
{
    write(1, str, my_strlen(str));
}