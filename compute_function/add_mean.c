/*
** EPITECH PROJECT, 2024
** main
** File description:
** main
*/

#include <stdio.h>

double add_mean(int nb_value, double mean, double new_value)
{
    double new_mean = 0;

    new_mean = ((nb_value * mean) + new_value) / (nb_value + 1);
    return new_mean;
}
