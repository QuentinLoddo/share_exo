/*
** EPITECH PROJECT, 2022
** B-PSU-200-BDX-2-1-mysokoban-quentin.loddo
** File description:
** error_message
*/

#include "sokoban.h"

void error_message(void)
{
    my_putstr(" Oops it's look like you try to use file that doesn't");
    my_putstr("exist \n");
    my_putstr(" or you are trying to use a map that is not correct. \n");
}

void help_message(void)
{
    my_putstr(" My_sokoban is a short game made with the ncurses lib\n");
    my_putstr(" In this game you need to move a box(X) into a storage(O)\n");
    my_putstr(" You need to use up, down, right and left arrow\n");
    my_putstr(" Keep the key 'backspace' pressed to quit the game\n");
}
