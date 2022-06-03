/*
** EPITECH PROJECT, 2022
** B-PSU-200-BDX-2-1-mysokoban-quentin.loddo
** File description:
** main
*/

#include "sokoban.h"

int main(int argc, char *argv[])
{
    if (argc != 2)
        return EXIT_ERROR;
    if (argv[1][0] == '-' && argv[1][1] == 'h') {
        help_message();
        return EXIT_SUCCESS;
    }
    if (argc == 2) {
        if (start_sokoban( argv[1]) == 84)
            return EXIT_ERROR;
        else {
            start_sokoban(argv[1]);
        }
    }
    return EXIT_SUCCESS;
}
