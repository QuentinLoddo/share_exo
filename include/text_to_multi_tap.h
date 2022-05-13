/*
** EPITECH PROJECT, 2022
** text to multi tap
** File description:
** text to multi tap
*/

#ifndef TEXT_TO_MULTI_TAP_H_
    #define TEXT_TO_MULTI_TAP_H_
    #define EXIT_ERROR 84
    #define EXIT_SUCCESS 0

    #include <stdio.h>
    #include <unistd.h>
    #include <stdlib.h>

    int is_char(char c);
    int check_error(char const *str);
    int main(int argc, char const **argv);
    void text_to_multi_tap(char const *str);
    void my_putchar(char c);
    void display_maj(char c);
    void my_putstr(char const *str);
    void display_space(char c1, char c2);

#endif /* !TEXT_TO_MULTI_TAP_H_ */
