/*
** EPITECH PROJECT, 2019
** my_sokoban
** File description:
** controls
*/

#include "sokoban.h"

static void move_box_down(char **map, int index, int j)
{
    if (map[index + 2][j] != '#' && map[index+ 2][j] != 'X') {
        map[index + 2][j] = 'X';
        map[index + 1][j] = 'P';
        map[index][j] = ' ';
    }
}

static void move_box_up(char **map, int index, int j)
{
    if (map[index- 2][j] != '#' && map[index - 2][j] != 'X') {
        map[index- 2][j] = 'X';
        map[index- 1][j] = 'P';
        map[index][j] = ' ';
    }
}

void move_player_down(char **map, int line_nbr, char *new_map)
{
    int len_line = 0;

    for (int index= 0, down = 0; index< line_nbr; index++) {
        len_line = my_strlen(map[index]);
        for (int j = 0; j <len_line; j++) {
            if ((map[index][j] == 'P' && map[index + 1][j] == ' ') ||
                (map[index][j] == 'P' && map[index + 1][j] == 'O')) {
                map[index+ 1][j] = 'P';
                map[index][j] = ' ';
                down++;
                break;
            }
            if (map[index][j] == 'P' && map[index + 1][j] == 'X') {
                move_box_down(map, index, j);
                down++;
                break;
            }
        }
        if (down == 1)
            break;
    }
    display_map(map, line_nbr, new_map);
}

void move_player_up(char **map, int line_nbr, char *new_map)
{
    int len_line = 0;

    for (int index = 0; index < line_nbr; index++) {
        len_line = my_strlen(map[index]);
        for (int j = 0; j < len_line; j++) {
            if ((map[index][j] == 'P' && map[index - 1][j] == ' ') ||
                (map[index][j] == 'P' && map[index - 1][j] == 'O')) {
                map[index- 1][j] = 'P';
                map[index][j] = ' ';
                break;
            }
            if (map[index][j] == 'P' && map[index- 1][j] == 'X') {
                move_box_up(map, index, j);
                break;
            }
        }
    }
    display_map(map, line_nbr, new_map);
}
