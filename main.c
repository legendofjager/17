#include <stdio.h>
#include <string.h>
#include "TASK.h"

int main(void) {
    char string[20];
    printf("Enter the string\n");
    if(fgets(string, sizeof(string), stdin) != NULL){
        char *change = strchr(string, '\n');
        if(change != NULL){
            *change = '\0';
        }
    } else {
        printf("Error while reading");
    }

    clear(string);
    printf("/%s/", string);
    return 0;
}
