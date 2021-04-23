/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** my_strdup
*/

#include "../include/matchstik.h"

char *my_strdup(char const *src)
{
    int i = 0;
    char *str = NULL;

    str = my_str_malloc(str, my_strlen(src) + 1);
    for (; src[i]; i++) {
        str[i] = src[i];
    }
    str[i] = '\0';
    return (str);
}