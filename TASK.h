#ifndef TASK_H
#define TASK_H

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

// ��������� �� ������ �������. ���� � ��� ����� || void || ���������� len ���������
void Arr_i_in(int *pointer,size_t len);
// ��������� �� ������ �������. ���� � ��� ����� || void || ������� len ���������
void Arr_i_out(const int *pointer,size_t len);
// ��������� �� ������ �������. ���� � ��� ����� || void || ���������� len ���������
void Arr_d_in(double *pointer,size_t len);
// ��������� �� ������ �������. ���� � ��� ����� || void || ������� len ���������
void Arr_d_out(const double *pointer,size_t len);


// ����������� ������ �������. ���� � ��� ����� || void || ������� ��������� �������
void clear(char *pointer);
#endif
