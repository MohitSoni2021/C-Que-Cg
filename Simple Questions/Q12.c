#include <iostream>

int main() {
    int arr[] = {1,2,2,3,3,3,4,5,6,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int j = 0;
    int count =0;
    for (int i = 0; i < n-1; i++) {
        if (arr[i]!= arr[i+1]) {
            arr[j++] = arr[i];
            count++;
        }
    }
    arr[j++] = arr[n-1];
    
    for (int i = 0; i < count+1; i++) {
        printf("%d\n", arr[i]);
    }
    
    

    return 0;
}