// Write a program to extract the file extension from a given filename.Example: Input: "document.pdf", Output: "pdf".





#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "document.pdf";
    char strlist[2][20] = {"Data1", "Data2"};
    char temp[20];
    int c = 0;
    int index = 0;
    
    for(int i=0; i<strlen(str); i++){
      if(str[i]!='.'){
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
    
    printf("\n%s\n", strlist[1]);
    
    return 0;
    
}