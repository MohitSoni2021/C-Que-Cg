//  Write a program to concatenate two given strings. Example: Input: ("hello", " world"), Output: "hello world".


#include <stdio.h>
#include <string.h>


int main()
{
    char str1[] = "Good";
    char str2[] = " Morning";
    int len = strlen(str1)+strlen(str2);

    // Not working well
    // char concatedstr[len];
    
    // for(int i=0; i<strlen(str1); i++){
    //   concatedstr[i] = str1[i];
    // }
    
    // for(int i=strlen(str1); i<len; i++){
    //   concatedstr[i]= str2[i-strlen(str1)];
    // }
    
    // printf("%s", concatedstr);
    // return 0;
    
    
    printf("%s\n", strcat(str1, str2));
    
}