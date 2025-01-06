/*
** EPITECH PROJECT, 2024
** main
** File description:
** main
*/

#include <stdio.h>

double add_hmean(int nb_value, double hmean, double new_value)
{
    double new_hmean = 0;

    new_hmean = (nb_value + 1) / ((nb_value / hmean) + (1 / new_value));
    return new_hmean;
}
