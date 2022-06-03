/*
** EPITECH PROJECT, 2022
** my_sokoban
** File description:
** sokoban
*/

#ifndef SOKOBAN_H_
    #define SOKOBAN_H_
    #define EXIT_SUCCESS 0
    #define EXIT_ERROR 84
    #define	RIGHT 100
    #define	DOWN 115
    #define	LEFT 113
    #define UP 122

    #include <fcntl.h>
    #include <stdio.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <curses.h>
    #include <stdbool.h>
    #include <string.h>
    #include <sys/stat.h>

    typedef struct nb_elem_s {
        int nb_wall;
        int nb_P;
        int nb_X;
        int nb_O;
    } nb_elem_t;

    int my_strlen(char *str);
    int get_nb_line(char const *buff);
    int main(int argc, char *argv[]);
    int check_error(char *str);
    int start_sokoban(char *map);
    int display_map(char **map, int line_nbr, char *new_map);

    char *get_buffer(char const *filepath);

    void my_putchar(char c);
    void help_message(void);
    void error_message(void);
    void my_putstr(char *str);
    void map_initialization(char *buff, char *new_map);
    void move_player_up(char **map, int line_nbr, char *new_map);
    void move_player_down(char **map, int line_nbr, char *new_map);
    void move_player_left(char **map, int line_nbr, char *new_map);
    void move_player_right(char **map, int line_nbr, char *new_map);
    void control_check(int key, char **map, int line_nbr, char *new_map);
    void check_movement(int key, char **map, int line_nbr, char *new_map);

#endif /* !SOKOBAN_H_ */
