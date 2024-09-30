// Write a program to find the length of a given string.



#include <stdio.h>


int main()
{
    char str[] = "This";
    int count = 0;
    
      
    while(str[count]!='\0'){
      count++;
    }
    
    printf("%d", count);
    
    
    return 0;
}