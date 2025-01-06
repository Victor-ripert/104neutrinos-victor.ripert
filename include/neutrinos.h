/*
** EPITECH PROJECT, 2023
** B-CPE-110 : Shell Boostrap
** File description:
** bootstrap.h
*/

#ifndef NEUTRINOS_H
    #define NEUTRINOS_H
typedef struct neutrinos_s {
    int nb_val;
    float a_mean;
    float rs_mean;
    float h_mean;
    float st_dev;
} neutrinos_t;
int neutrinos(int argc, char **argv);
int get_newvalue(double *value);
int compute_loop(neutrinos_t *data, double new_value);
int display(neutrinos_t data);
int is_nbr(char *str);
int arg_parsing(int argc, char **argv, neutrinos_t *data);
double add_mean(int nb_value, double mean, double new_value);
double add_rms(int nb_value, double rms, double new_value);
double add_hmean(int nb_value, double hmean, double new_value);
double add_std(int nb_value, double std_dev, double new_value, double a_mean);
double find_rms(int nb_value, double a_mean, double std_dev);
#endif /* NEUTRINOS_H */
