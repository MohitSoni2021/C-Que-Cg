// Check if the array arr = [1, 2, 3, 4, 5] contains the number 3 and print true or false.

#include <stdio.h>

int main() {
    int arr[] = {1,2,3,4,5,6,7};
    int target = 8;
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        if(arr[i]==target){
            printf("True");
            return 0;
        }
    }
    
    printf("False");
    return 0;
}