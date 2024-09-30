#include <stdio.h>
#include <ctype.h>


int main()
{
    
    char str[] = "This";
    int len = sizeof(str)-1;
    
    for(int i=0; i<len; i++){
      str[i] = toupper(str[i]);
    }
    
    printf("%s", str);
    
    
    return 0;
}