#include <stdio.h>
#include <string.h>


int main()
{
    char str[] = "Thisa";
    char target = 's';
    
    if(str[strlen(str)-1]==target){
      printf("true");
    }else{
      printf("false");
    }
    
    return 0;
    
}