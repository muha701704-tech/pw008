#ifndef MYARRFUNC_H
#define MYARRFUNC_H

#include <stddef.h>

/* Служебные функции для работы с массивом. */
int choose_size(size_t *n);
int fill_array(int *arrptr, size_t n);
void show_array(const int *arrptr, size_t n);
int read_index_range(size_t n, size_t *k, size_t *m);
int read_value_range(int *k, int *m);

/* Функции варианта 2: задания 10, 17 и 28. */
long long sum_index_range(const int *arrptr, size_t n, size_t k, size_t m);
int find_value_indexes(const int *arrptr, size_t n, int k, int m);
int find_above_average(const int *arrptr, size_t n);

#endif
