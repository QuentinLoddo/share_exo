/*
** EPITECH PROJECT, 2022
** is_char
** File description:
** function to know if a char is a letter or not
*/

#include "text_to_multi_tap.h"

int is_char(char c)
{
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || c == 32)
        return 0;
    return 84;
}
