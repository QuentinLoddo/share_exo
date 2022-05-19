/*
** EPITECH PROJECT, 2022
** kebab case
** File description:
** kebab case
*/

#include "fazz_bizz.h"

static int display_number(int number)
{
    int nine = 9;
    int ten = 10;
    int result_mult_nine = number / nine;
    int result_mult_ten = number / ten;

    if (result_mult_ten * ten == number &&
        result_mult_nine * nine == number)
        return 19;
    if (result_mult_nine * nine == number)
        return 9;
    if (result_mult_ten * ten == number)
        return 10;
    else
        return 1;
}

static void loop_number(int num_one, int num_two)
{
    while (num_one <= num_two) {
        if (display_number(num_one) == 9)
            printf("Bizz\n");
        if (display_number(num_one) == 10)
            printf("Fazz\n");
        if (display_number(num_one) == 19)
            printf("FazzBizz\n");
        if (display_number(num_one) == 1)
            printf("%i\n", num_one);
        num_one += 1;
    }
}

int fazz_bizz(char const *number_one, char const *number_two)
{
    int num_one = 0;
    int num_two = 0;

    if (!number_one || !number_two)
        return EXIT_ERROR;
    num_one = atoi(number_one);
    num_two = atoi(number_two);
    loop_number(num_one, num_two);
    return EXIT_SUCCESS;
}
