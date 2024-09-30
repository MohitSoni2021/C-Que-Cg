#include <stdio.h>
#include <string.h>


// It's not completely yet;


int main()
{
    char str1[] = "a Good a";
    char newstr[strlen(str1)+1];
    
    for(int i=0; i<strlen(str1); i++){
      newstr[i] = str1[i];
    }
    
    newstr[strlen(str1)]='\0';
    
    printf("%s\n", str1);
    printf("%s", newstr);
    
    for(int i=0; i<strlen(str1); i++){
      if()
    }
    
    
    
    
    return 0;
}