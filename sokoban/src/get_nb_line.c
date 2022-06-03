/*
** EPITECH PROJECT, 2022
** soko2
** File description:
** get_buffer
*/

#include "sokoban.h"

int get_nb_line(char const *buff)
{
    int line_nbr = 0;

    for (int i = 0; buff[i] != '\0'; i++)
        if (buff[i] == '\n')
            line_nbr = line_nbr + 1;
    return (line_nbr);
}
