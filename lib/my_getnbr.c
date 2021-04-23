/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** my_getnbr
*/

#include "../include/matchstik.h"

int my_getnbr(char const *str)
{
    int i = 0;

    while (*str) {
        if (*str >= '0' && *str <= '9') {
            i = i * 10;
            i = i + (*str - '0');
        } else if (*str != '\n')
            return (-1);
        str++;
    }
    return (i);
}
