// Access and print the first and last element of the array arr = [10, 20, 30, 40, 50].

#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int len = sizeof(arr)/sizeof(arr[0]);

    printf("First element: %d\n", arr[0]);
    printf("Last element: %d\n", arr[len-1]);
    

    return 0;
}