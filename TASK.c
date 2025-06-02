#include "TASK.h"

void Arr_i_in(int *pointer,size_t len){

    for(int *i = pointer; i != pointer+len; i++){
        printf("¬ведите число: \n");
        scanf("%i", i);

    }
}
void Arr_i_out(const int *pointer,size_t len){
    for(const int *i = pointer; i != pointer+len; i++){
        printf("%i ", *i);

    }

}



void Arr_d_in(double *pointer,size_t len){

    for(double *i = pointer; i != pointer+len; i++){
        printf("¬ведите число: \n");
        scanf("%lf", i);

    }
}
void Arr_d_out(const double *pointer,size_t len){
    for(const double *i = pointer; i != pointer+len; i++){
        printf("%lf ", *i);
    }

}

void clear(char *arr){
    char* read = arr;
    for(char *i = read;*i != '\0' ;i++){
        if(i != read){
            *read = *i;

        }
        // потенциальный out of bounds, но работает
        if(*read != ' ' || *(i+1) != ' ' && *arr != ' '){
            read++;
        }
    }


    if(read != arr && *(read -1) == ' '){
        *(read-1) = '\0';
    }else{
        *read = '\0';
    }

}
