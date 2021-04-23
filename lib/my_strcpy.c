/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** my_strcpy
*/

#include "../include/matchstik.h"

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;
    int size = my_strlen(src);

    dest = NULL;
    dest = my_str_malloc(dest, size);
    for (; i < size; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (n > i) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';

    return (dest);
}