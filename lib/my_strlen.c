/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** my_strlen
*/

#include "../include/matchstik.h"

size_t my_strlen(const char *str)
{
    size_t i = 0;

    for (;str[i];i++);
    return (i);
}

size_t my_ptrlen(char const **tab)
{
    size_t i = 0;

    for (;tab[i]; i++);
    return (i);
}