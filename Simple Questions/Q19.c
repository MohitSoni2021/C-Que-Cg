// Check if the array arr = [1, 2, 3, 4, 5] is sorted in ascending order, and print true or false.

#include <stdio.h>
int main()
{
    int arr[]={1,2,3,4,5};
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
      if(arr[i]>arr[i+1]){
        printf("not sorted");
        return 0 ;
      }
    }
    printf("sorted");
    return 0 ;
}