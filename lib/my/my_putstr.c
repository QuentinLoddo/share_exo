/*
** EPITECH PROJECT, 2021
** my_putstr
** File description:
** my_putstr
*/

#include "text_to_multi_tap.h"

void my_putstr(char const *str)
{
    int index = 0;

    while (str[index] != '\0') {
        my_putchar(str[index]);
	index += 1;
    }
}
