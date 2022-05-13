/*
** EPITECH PROJECT, 2022
** check errors
** File description:
** check errors
*/

#include "text_to_multi_tap.h"

int check_error(char const *str)
{
    int index = 0;

    if (!str)
        return 84;
    while (str[index] != '\0') {
        if (is_char(str[index]) == 84)
            return 84;
        index += 1;
    }
    return 0;
}
