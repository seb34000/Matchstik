/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** my_putnbr
*/

#include "../include/matchstik.h"

int my_putnbr(int nb)
{
    if (nb == -2147483648) {
        write(1, "-2147483648", 11);
        return (0);
    }
    if (nb < 0) {
        nb = -nb;
        write (1, "-", 1);
    }
    if (nb > 9) {
        my_putnbr(nb / 10);
        my_putnbr(nb % 10);
    } else {
        my_putchar(nb + '0');
    }
    return (0);
}
