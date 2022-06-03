/*
** EPITECH PROJECT, 2022
** B-PSU-200-BDX-2-1-mysokoban-quentin.loddo
** File description:
** check_error
*/

#include "sokoban.h"

static int check_bad_char(char const *str)
{
    int index = 0;

    while (str[index] != '\0') {
        if (str[index] == ' ' || str[index] == '#' || str[index] == 'P' ||
        str[index] == 'X' || str[index] == 'O' || str[index] == '\n') {
            index += 1;
        } else {
            my_putstr("Sorry but it's look like you have a bad character ");
            my_putstr("in the map please change your map ^^\n");
            return EXIT_ERROR;
        }
    }
        return EXIT_SUCCESS;
}

static int check_char(char *str)
{
    nb_elem_t *nb_elem = malloc(sizeof(nb_elem_t));

    for(int index = 0; str[index] != '\0'; index += 1) {
        if (str[index] == '#')
            nb_elem->nb_wall += 1;
        if (str[index] == 'P')
            nb_elem->nb_P += 1;
        if (str[index] == 'X')
            nb_elem->nb_X += 1;
        if (str[index] == 'O')
            nb_elem->nb_O += 1;
    }
    if (nb_elem->nb_wall < 12 ||
        nb_elem->nb_P != 1 || nb_elem->nb_X < nb_elem->nb_O ||
        nb_elem->nb_O <1 ) {
        return EXIT_ERROR;
    }
    return EXIT_SUCCESS;
}

int check_error(char *str)
{
    if (check_char(str) == 84) {
        return EXIT_ERROR;
    }
    if (check_bad_char(str) == 84) {
        return EXIT_ERROR;
    }
    return EXIT_SUCCESS;
}
