// Find and print the difference between the maximum and minimum elements in arr = [80, 30, 70, 50, 20].


#include <stdio.h>
int main()
{
    int arr[]={1,2,3,4,5};
    int min = arr[0];
    int max = arr[0];
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
      if(arr[i]>max){
        max=arr[i];
      }
      if(arr[i]<min){
        min=arr[i];
      }
    }
    printf("%d\t", max-min);
}