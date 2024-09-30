// Print an inverted right-angled triangle pattern with n rows.

#include <stdio.h>

int main(){
    int height = 5;
    for(int i=0; i<height; i++){
        for(int j=0; j<height-i; j++){
            printf("*");
        }
        printf("\n");
    }

}

