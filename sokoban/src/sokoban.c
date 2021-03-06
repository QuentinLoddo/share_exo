/*
** EPITECH PROJECT, 2022
** B-PSU-200-BDX-2-1-mysokoban-quentin.loddo
** File description:
** sokoban.c
*/

#include "sokoban.h"

void check_movement(int key, char **map, int line_nbr, char *new_map)
{
    if (key == UP || key == KEY_UP)
        move_player_up(map, line_nbr, new_map);
    if (key == DOWN || key == KEY_DOWN)
        move_player_down(map, line_nbr, new_map);
    if (key == LEFT || key == KEY_LEFT)
        move_player_left(map, line_nbr, new_map);
    if (key == RIGHT || key == KEY_RIGHT)
        move_player_right(map, line_nbr, new_map);
}

int display_map(char **map, int line_nbr, char *new_map)
{
    int len_line = 0;
    int key;

    initscr();
    keypad(stdscr, TRUE);
    while (1) {
        clear();
        for (int i = 0; i != line_nbr + 1; i++) {
            len_line = my_strlen(map[i]) / 2;
            mvprintw((LINES / 2) - line_nbr + i, (COLS / 2) - len_line, map[i]);
        }
        refresh();
        key =  getch();
        if (key == 'q')
            return EXIT_ERROR;
        check_movement(key, map, line_nbr, new_map);
    }
    return EXIT_SUCCESS;
}

void map_initialization(char *buff, char *new_map)
{
    int lines = get_nb_line(buff);
    char **map = malloc(sizeof(char *) * lines);
    int temp = 0;
    int k = 0;

    for (int j = 0; buff[temp] != '\0'; temp++) {
        if (buff[temp] == '\n')
            j++;
        map[j] = malloc(sizeof(char) * (temp + 1));
    }
    temp = 0;
    for (int j = 0; buff[temp] != '\0'; temp++, k++) {
        if (buff[temp] == '\n') {
            map[j][temp] = '\0';
            j++;
            temp++;
            k = 0;
        }
        map[j][k] = buff[temp];
    }
    display_map(map, lines, new_map);
}

int start_sokoban(char *map)
{
    int fd = open(map, O_RDONLY);
    char *buff;
    struct stat st;

    if (!map)
        return EXIT_ERROR;
    stat(map, &st);
    buff = malloc(st.st_size + 10);
    read(fd, buff, st.st_size);
    if (check_error(buff) == 84)
        return 84;
    map_initialization(buff, map);
    free(buff);
    close(fd);
    return EXIT_SUCCESS;
}
