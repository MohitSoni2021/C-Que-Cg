// 39. Given a string, check if all brackets are closed properly. Example:Input: "{[()]}" Output: true

#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "{[()]";
    int len = strlen(str);
    
    for (int i = 0; i < (len/2)-1; i++)
    {
        if(!((str[i]=='[' && str[len-1-i]==']') || (str[i]=='(' && str[len-1-i]==')') || (str[i]=='{' && str[len-1-i]=='}')))
        {   
            printf("false");
            return 0;
        }

    }

    printf("true");
    return 0;
    

}