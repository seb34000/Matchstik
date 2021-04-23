/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** my_putnbr_base
*/

#include "../include/matchstik.h"

char *my_itob(long long nb, char *base, int ix)
{
    long size = my_strlen(base);
    static char bin[65];
    static int idx = 0;

    idx = ix;
    if (idx == 0) {
        for (int i = 0; i < 65; i++)
            bin[i] = 0;
    }
    if (nb >= size) {
        my_itob(nb / size, base, idx);
        my_itob(nb % size, base, idx);
    } else {
        bin[idx] = base[nb];
        idx++;
    }
    bin[idx] = '\0';
    return (bin);
}