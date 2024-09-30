// sort the arr in the ascending order

#include <stdio.h>
#include <string.h>


int main()
{
    int arr[] = {1,2,3,4,9,8,2,2,2,2};
    
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
      if(arr[i]>arr[i+1]){
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
        
        i-=2;
      }
    }
    
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
      printf("%d\n", arr[i]);
    }
    
    return 0;
    
}