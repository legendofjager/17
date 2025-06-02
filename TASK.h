#ifndef TASK_H
#define TASK_H

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

// указатель на массив соответ. типа и его длина || void || «аписывает len элементов
void Arr_i_in(int *pointer,size_t len);
// указатель на массив соответ. типа и его длина || void || ¬ыводит len элементов
void Arr_i_out(const int *pointer,size_t len);
// указатель на массив соответ. типа и его длина || void || «аписывает len элементов
void Arr_d_in(double *pointer,size_t len);
// указатель на массив соответ. типа и его длина || void || ¬ыводит len элементов
void Arr_d_out(const double *pointer,size_t len);


// указательна массив соответ. типа и его длина || void || убирает повторные пробелы
void clear(char *pointer);
#endif
