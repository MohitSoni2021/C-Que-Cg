// Write a program to split a string into an array of words.


#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "document pdf and working";
    int spacecount = 0;
    
    for(int i=0; i<strlen(str); i++){
      if(str[i]==' '){
        spacecount++;
      }
    }
    
      
    
    char strlist[spacecount+1][20];
    char temp[20];
    int c = 0;
    int index = 0;
    
    for(int i=0; i<strlen(str); i++){
      if(str[i]!=' '){
        temp[c] = str[i];
        c++;
      }else{
        temp[c] = '\0';
        strcpy(strlist[index], temp);
        index++;
        temp[20];
        c = 0;
      }
      
      if(i==strlen(str)-1){
        temp[c] = '\0';
        strcpy(strlist[index], temp);
        index++;
        temp[20];
        c = 0;
      }
    }
    
    for(int i=0; i<sizeof(strlist)/sizeof(strlist[0]); i++){
      printf("\n%s\n", strlist[i]);
    }
    
    return 0;
    
}