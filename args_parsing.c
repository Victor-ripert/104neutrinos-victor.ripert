/*
** EPITECH PROJECT, 2024
** main
** File description:
** main
*/
#include "neutrinos.h"
#include <stdlib.h>

int arg_parsing(int argc, char **argv, neutrinos_t *data)
{
    if (argc < 5 || argc > 5) {
        return 84;
    }
    for (int i = 1; i != argc; i++) {
        if (is_nbr(argv[i]) < 0) {
            return 84;
        }
    }
    data->nb_val = atoi(argv[1]);
    data->a_mean = atof(argv[2]);
    data->h_mean = atof(argv[3]);
    data->st_dev = atof(argv[4]);
    return 0;
}
