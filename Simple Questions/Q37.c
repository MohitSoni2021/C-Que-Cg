// 37. Given a sorted array and a target value, return the starting and ending position of that target in the array.Example:Input: [5, 7, 7, 8, 8, 10], target=8 ,Output: [3, 4]


// not working ;;

#include <stdio.h>

int main(){
    int arr[] = {5, 7, 7, 8, 8, 10};
    int target = 8;
    int start = 0;
    int end = sizeof(arr)/sizeof(arr[0]) - 1;
    int firstseachend=1;
    int lastseachend=1;
    int final[2];

    for(int i=0; i<end+1; i++){
        if(arr[i]==target && firstseachend){
            final[0] = start;
        }else{
            start++;
        }
        
        if(arr[end+1-i]==target && lastseachend){
            final[1] = end;
            printf("%d", start);
        }else{
            end++;
        }
        
    }

    printf("The target %d starts at index %d and ends at index %d", target, final[0], final[1]);

}