/*
** EPITECH PROJECT, 2022
** text to multi tap
** File description:
** text to multi tap
*/

#include "text_to_multi_tap.h"

static void display_char_number_fourth_part(char c)
{
    if (c == 88 || c == 120)
        my_putstr("99");
    if (c == 89 || c == 121)
        my_putstr("999");
    if (c == 90 || c == 122)
        my_putstr("9999");
    if (c == 32)
        my_putchar('0');
}

static void display_char_number_third_part(char c)
{
    if (c == 80 || c == 112)
        my_putchar('7');
    if (c == 81 || c == 113)
        my_putstr("77");
    if (c == 82 || c == 114)
        my_putstr("777");
    if (c == 83 || c == 115)
        my_putstr("7777");
    if (c == 84 || c == 116)
        my_putstr("8");
    if (c == 85 || c == 117)
        my_putstr("88");
    if (c == 86 || c == 118)
        my_putstr("888");
    if (c == 87 || c == 119)
        my_putstr("9");
    else
        display_char_number_fourth_part(c);
}

static void display_char_number_next(char c)
{
    if (c == 73 || c == 105)
        my_putstr("444");
    if (c == 74 || c == 106)
        my_putchar('5');
    if (c == 75 || c == 107)
        my_putstr("55");
    if (c == 76 || c == 108)
        my_putstr("555");
    if (c == 77 || c == 109)
        my_putchar('6');
    if (c == 78 || c == 110)
        my_putstr("66");
    if (c == 79 || c == 111)
        my_putstr("666");
    else
        display_char_number_third_part(c);
}

static void display_char_number(char c)
{
    if (c == 65 || c == 97)
        my_putchar('2');
    if (c == 66 || c == 98)
        my_putstr("22");
    if (c == 67 || c == 99)
        my_putstr("222");
    if (c == 68 || c == 100)
        my_putchar('3');
    if (c == 69 || c == 101)
        my_putstr("33");
    if (c == 70 || c == 102)
        my_putstr("333");
    if (c == 71 || c == 103)
        my_putchar('4');
    if (c == 72 || c == 104)
        my_putstr("44");
    else
        display_char_number_next(c);
}

void text_to_multi_tap(char const *str)
{
    int index = 0;
    
    while (str[index] != '\0') {
        display_maj(str[index]);
        display_char_number(str[index]);
        display_space(str[index], str[index + 1]);
        index += 1;
    }
}
