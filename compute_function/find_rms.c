/*
** EPITECH PROJECT, 2024
** main
** File description:
** main
*/

#include <stdio.h>
#include <math.h>

double find_rms(int nb_value, double a_mean, double std_dev)
{
    double rms = 0;

    rms = sqrt((std_dev * std_dev) + (a_mean * a_mean));
    return rms;
}
