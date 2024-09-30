// Write a program to repeat a string a specified number of times.Example: Input: ("hello", 3), Output: "hellohellohello".

// not working well

#include <stdio.h>
#include <string.h>


int main()
{
    char str[] = "This ";
    int len = strlen(str);
    int repeat = 3;
    int newstr[(len*3)+1];
    int c=0;
    
    for(int i=0; i<(len*3)+1; i++){
      if(c==len){
        c = 0;
      }else{
        newstr[i] = str[c];
      }
      c++;
    }
    
    newstr[(len*3)+1] = '\0';
    
    for(int i=0; i<(len*3)+1; i++){
      printf("%s", newstr[2]);
    }
    
}