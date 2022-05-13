/*
** EPITECH PROJECT, 2022
** display space
** File description:
** display space
*/

#include "text_to_multi_tap.h"

static void display_space_next(char c1, char c2)
{
    if (((c1 >= 112 && c1 <= 115) && (c2 >= 112 && c2 <= 115)) ||
        ((c1 >= 80 && c1 <= 83) && (c2 >= 112 && c2 <= 115)))
        my_putchar(' ');
    if (((c1 >=  116 && c1 <= 118) && (c2 >= 116 && c2 <= 118)) ||
        ((c1 >= 84 && c1 <= 86) && (c2 >= 116 && c2 <= 118)))
        my_putchar(' ');
    if (((c1 >= 119 && c1 <= 122) && (c2 >= 119 && c2 <= 122)) ||
        ((c1 >= 87 && c1 <= 90) && (c2 >= 119 && c2 <= 122)))
        my_putchar(' ');
}

void display_space(char c1, char c2)
{
    if (((c1 >= 97 && c1 <= 99) && (c2 >= 97 && c2 <= 99)) ||
        ((c1 >= 65 && c1 <= 67) && (c2 >= 97 && c2 <= 99)))
        my_putchar(' ');
    if (((c1 >= 100 && c1 <= 102) && (c2 >= 100 && c2 <= 102)) ||
        ((c1 >= 68 && c1 <= 70) && (c2 >= 100 && c2 <= 99)))
        my_putchar(' ');
    if (((c1 >= 103 && c1 <= 105) && (c2 >= 103 && c2 <= 105)) ||
        ((c1 >= 71 && c1 <= 73) && (c2 >= 103 && c2 <= 105)))
        my_putchar(' ');
    if (((c1 >= 106 && c1 <= 108) && (c2 >= 106 && c2 <= 108)) ||
        ((c1 >= 74 && c1 <= 76) && (c2 >= 106 && c2 <= 108)))
        my_putchar(' ');
    if (((c1 >= 109 && c1 <= 111) && (c2 >= 109 && c2 <= 111)) ||
        ((c1 >= 77 && c1 <= 79) && (c2 >= 109 && c2 <= 111)))
        my_putchar(' ');
    else
        display_space_next(c1, c2);
}
