/*
** EPITECH PROJECT, 2022
** check error
** File description:
** check error
*/

#include "fazz_bizz.h"

static int my_strlen(char const *str)
{
    int index = 0;

    if (!str)
        return NO_STR;
    while (str[index] != '\0')
        index += 1;
    return index;
}

static void display_error(void)
{
    char *str = "Error: the second parameter must \
be greater than the first one.";
    if (my_strlen(str) == NO_STR)
    write(2, str, my_strlen(str));
}

int check_errors(char const *number_one, char const *number_two)
{
    if (!number_one || !number_two)
        return 84;
    if (atoi(number_one) > atoi(number_two)) {
        display_error();
        return 84;
    }
    return 0;
}
