/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** tcheck_error
*/

#include "../include/matchstik.h"

int tcheck_error(char const **av)
{
    int line = my_getnbr(av[1]);
    int match = my_getnbr(av[2]);

    if (line < 2 || line > 99 || match <= 0)
        return (84);
}