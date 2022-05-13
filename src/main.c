/*
** EPITECH PROJECT, 2021
** main
** File description:
** main
*/

#include "text_to_multi_tap.h"

int main(int argc, char const *argv[])
{
  if(argc != 2) {
    return 84;
  } else if (argv[1] == NULL) {
      return 84;
  } else if (check_error(argv[1]) == 84) {
      return 84;
  } else {
      text_to_multi_tap(argv[1]);
      my_putchar('\n');
  }
  return 0;
}
