/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** my_malloc
*/

#include "../include/matchstik.h"

char *my_str_malloc(char *str, size_t size)
{
    char c = 0;
    size_t i = 0;

    str = malloc(sizeof(char) * size + 1);
    if (str == NULL)
        return (NULL);
    for (; i < size; i++) {
        str[i] = c;
    }
    str[i] = '\0';
    return (str);
}

void *my_memset(void *str, int value, size_t size)
{
    unsigned char *ptr = str;
    size_t i = 0;

    for (;i < size; i++)
        ptr[i] = (unsigned char)value;
    return (ptr);
}

void *my_calloc(int value, size_t size_ptr, size_t n_size)
{
    char *ptr;
    size_t size = size_ptr * n_size;

    if ((ptr = malloc(size)) != NULL) {
        my_memset(ptr, value, size);
    } else {
        return (NULL);
    }
    return (ptr);
}
