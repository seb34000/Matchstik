/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** split_string
*/

#include "../include/matchstik.h"

int is_alphanum(const char c)
{
    if (c != '\n')
        return (0);
    return (1);
}

int my_count_word(const char *str)
{
    int count = 0;
    int word = 0;

    if (str == NULL)
        return (0);
    while (str[count] != '\0') {
        if (is_alphanum(str[count]) && is_alphanum(str[count + 1]) == 0)
            ++word;
        ++count;
    }
    return (word + 1);
}

int get_col(const char *str)
{
    int i = 0;

    for (i = 0; str[i]; i++) {
        if (is_alphanum(str[i]) == 1)
            return (i);
    }
    return (i);
}

char **split_string(char *str)
{
    char **array = my_calloc(0, sizeof(char *), my_count_word(str) + 1);
    int i = 0;
    int j = 0;

    while (str[i]) {
        if (is_alphanum(str[i]) == 0) {
            array[j] = my_calloc(0, sizeof(char), get_col(&str[i]) + 1);
            my_strncpy(array[j], &str[i], get_col(&str[i]));
            array[j][get_col(&str[i])] = '\0';
            i += get_col(&str[i]);
            j++;
        } else {
            i++;
        }
    }
    return (array);
}
