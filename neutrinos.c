/*
** EPITECH PROJECT, 2024
** main
** File description:
** main
*/
#include "neutrinos.h"
#include <stdlib.h>
#include <stdio.h>

int neutrinos(int argc, char **argv)
{
    neutrinos_t data;
    double new_value = 0;
    int new_value_return = 0;

    if (arg_parsing(argc, argv, &data) == 84) {
        return 84;
    }
    while (new_value_return != 1) {
        new_value_return = get_newvalue(&new_value);
        if (new_value_return < 0) {
            return 84;
        }
        if (new_value_return == 1) {
            return 0;
        }
        compute_loop(&data, new_value);
        display(data);
    }
    return 0;
}
