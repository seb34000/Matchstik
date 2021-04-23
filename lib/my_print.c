/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** my_print
*/

#include "../include/matchstik.h"

void my_putchar(char const c)
{
    write (1, &c, 1);
}

void my_putstr(char const *str)
{
    size_t i = 0;

    for (;str[i]; i++) {
        my_putchar(str[i]);
    }
}

void my_put_array(char **array)
{
    size_t i = 0;

    for (;array[i] != NULL; i++) {
        my_putstr(array[i]);
        my_putchar('\n');
    }
}

void my_put_array_no_nl(char **array)
{
    size_t i = 0;

    for (;array[i] != NULL; i++) {
        my_putstr(array[i]);
        my_putchar('\n');
    }
}