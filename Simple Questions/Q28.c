//  Write a function that takes two numbers and prints the largest one.



#include <stdio.h>
#include <string.h>

int longest(int a, int b){
  if(a>b){
    return a;
  }else if(b>a){
    return b;
  }else{
    return -1;
  }
}

int main()
{
    
    printf("%d\n", longest(5,4));
    return 0;
    
}