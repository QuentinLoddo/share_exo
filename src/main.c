/*
** EPITECH PROJECT, 2021
** main
** File description:
** main
*/

#include "fazz_bizz.h"

int main(int argc, char const *argv[])
{
    if (argc != 3 || check_errors(argv[1], argv[2])) {
        return 84;
    } else {
        fazz_bizz(argv[1], argv[2]);
    }
    return 0;
}
