// Check if all the elements in arr = [3, 5, 9, 1, 7] are positive numbers, and print true or false.

#include <stdio.h>

int main() {
    int arr[] = {1,2,3,4,5,1};
    int len = sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0; i<len; i++){
        if(arr[i]<0){
            printf("false");
            return 0;
        }
    }
    
    printf("true");
    
}