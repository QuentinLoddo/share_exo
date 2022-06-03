/*
** EPITECH PROJECT, 2022
** B-PSU-200-BDX-2-1-mysokoban-quentin.loddo
** File description:
** move
*/

#include "sokoban.h"

static void move_box_left(char **map, int index, int j)
{
    if (map[index][j - 2] != '#' && map[index][j - 2] != 'X') {
        map[index][j - 2] = 'X';
        map[index][j - 1] = 'P';
        map[index][j] = ' ';
    }
}

static void move_box_right(char **map, int index, int j)
{
    if (map[index][j + 2] != '#' && map[index][j + 2] != 'X') {
        map[index][j + 1] = 'P';
        map[index][j + 2] = 'X';
        map[index][j] = ' ';
    }
}

void move_player_left(char **map, int line_nbr, char *new_map)
{
    int len_line = 0;

    for (int index = 0; index < line_nbr; index++) {
        len_line = my_strlen(map[index]);
        for (int j = 0; j < len_line; j++) {
            if ((map[index][j] == 'P' && map[index][j - 1] == ' ')||
                (map[index][j] == 'P' && map[index][j - 1] == 'O')) {
                map[index][j - 1] = 'P';
                map[index][j] = ' ';
                break;
            }
            if (map[index][j] == 'P' && map[index][j - 1] == 'X') {
                move_box_left(map, index, j);
                break;
            }
        }
    }
    display_map(map, line_nbr, new_map);
}

void move_player_right(char **map, int line_nbr, char *new_map)
{
    int len_line = 0;

    for (int index = 0; index < line_nbr; index++) {
        len_line = my_strlen(map[index]);
        for (int j = 0; j < len_line; j++) {
            if ((map[index][j] == 'P' && map[index][j + 1] != '#')||
                (map[index][j] == 'P' && map[index][j + 1] == 'O')) {
                map[index][j + 1] = 'P';
                map[index][j] = ' ';
                break;
            }
            if (map[index][j] == 'P' && map[index][j + 1] == 'X') {
                move_box_right(map, index, j);
                break;
            }
        }
    }
    display_map(map, line_nbr, new_map);
}
