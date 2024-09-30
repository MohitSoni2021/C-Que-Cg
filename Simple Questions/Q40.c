// 40. Given two numbers, generate an array containing all numbers between them (inclusive). Example: Input: 1,5 Output: [1, 2, 3, 4, 5]

#include <stdio.h>

int main(){
    int start = 1;
    int end = 5;
    int arr[end-start+1];
    int c=0;
    
    for(int i=start; i<=end; i++){
        arr[c] = start + c;
        c++;
    }

    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        printf("%d\n", arr[i]);
    }
}