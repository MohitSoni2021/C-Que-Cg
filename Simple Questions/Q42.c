// 42. Given two lists of events. Each event is represented by a start time and an end time. You need to determine if the two events conflict, which means if the events overlap in time.

#include <stdio.h>

int main(){
    int interval1[] = {1,5};
    int interval2[] = {4,8};
    
    if((interval1[0]>=interval2[0] && interval1[0]<interval2[1]) && (interval1[1]>=interval2[0] && interval1[1]<interval2[1])){
        printf("No Conflict");
    }else{
        printf("Conflict");
    }
}