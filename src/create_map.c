/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** create_map
*/

#include "../include/matchstik.h"

char **malloc_map(size_t size)
{
    char **map = NULL;
    int i = 0;

    map = malloc(sizeof(char *) * (size + 3));
    my_memset(map, 0, sizeof(char *) * (size + 3));
    map[0] = malloc(sizeof(char) * (size * 2) + 2);
    my_memset(map[0], '*', sizeof(char) * (size * 2) + 1);
    map[i][size * 2 + 1] = '\0';
    for (i = 1; i < (size + 1); i++) {
        map[i] = malloc(sizeof(char) * (size * 2) + 2);
        map[i] = my_memset(map[i], ' ', sizeof(char) * (size * 2) + 1);
        map[i][0] = '*';
        map[i][size * 2] = '*';
        map[i][size * 2 + 1] = '\0';
    }
    map[i] = malloc(sizeof(char) * (size * 2) + 2);
    my_memset(map[i], '*', sizeof(char) * (size * 2) + 1);
    map[i][size * 2 + 1] = '\0';
    map[i+1] = NULL;
    return (map);
}

void create_map_two(char **map, int idx, int i)
{
    map[idx][i - 1] = '|';
    map[idx][i] = '|';
    map[idx][i + 1] = '|';
}

char **create_map(char const **av)
{
    size_t line = my_getnbr(av[1]);
    char **map = malloc_map(line);
    int idx = 2;

    for (size_t i = 1; i < (line * 2); i++)
        map[1][i] = (i == line) ? '|' : ' ';
    for (size_t i = 1; i < (line * 2); i++) {
        if (idx == line + 1)
            break;
        else if (map[idx - 1][i] == '|') {
            create_map_two(map, idx, i);
        } else
            map[idx][i] = (map[idx][i] != '|') ? ' ' : '|';
        if (i + 1 == line * 2) {
            idx++;
            i = 1;
        }
    }
    return (map);
}