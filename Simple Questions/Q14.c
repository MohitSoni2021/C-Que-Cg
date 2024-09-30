// 14. Add Element to the Beginning of an Array Example: Input: nums = [1, 2, 3, 4]; Output: nums = [0,1,2,3,4].

#include <stdio.h>

int main() {
    int arr[6] = {1,2,3,4,5};
    int length = sizeof(arr)/sizeof(arr[0]);
    int targetValue = 0;
    
    for(int i=sizeof(arr)/sizeof(arr[0])-1; i>0; i--){
        arr[i] = arr[i-1];
    }
    
    arr[0]=targetValue;
    
    for(int i=0; i<length; i++){
        printf("%d\n", arr[i]);
    }
    
    return 0;
}