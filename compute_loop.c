/*
** EPITECH PROJECT, 2024
** main
** File description:
** main
*/
#include "neutrinos.h"
#include <stdlib.h>
#include <stdio.h>

int compute_loop(neutrinos_t *data, double new_value)
{
    double new_mean = 0;
    double new_rms = 0;
    double new_hmean = 0;
    double std_dev = 0;

    std_dev = add_std(data->nb_val, data->st_dev, new_value, data->a_mean);
    new_mean = add_mean(data->nb_val, data->a_mean, new_value);
    if (data->rs_mean == 0) {
        data->rs_mean = find_rms(data->nb_val, data->a_mean, data->st_dev);
    }
    new_rms = add_rms(data->nb_val, data->rs_mean, new_value);
    new_hmean = add_hmean(data->nb_val, data->h_mean, new_value);
    data->a_mean = new_mean;
    data->st_dev = std_dev;
    data->rs_mean = new_rms;
    data->h_mean = new_hmean;
    data->nb_val += 1;
    return 0;
}
