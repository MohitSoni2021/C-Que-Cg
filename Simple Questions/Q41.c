// 41. Given a valid IP address, you are asked to return a defanged version of that IP address. A defanged IP address replaces every period "." with "[.]".
// Example1:Input: address = "1.1.1.1" Output: "1[.]1[.]1[.]1"
// Example2:Input: address = "255.100.50.0" output: "255[.]100[.]50[.]0"


// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {

    char ipstr[] = "1.1.1.1";
    int dotCount = 0;

    for(int i=0; i<strlen(ipstr); i++){
        if(ipstr[i]=='.'){
            dotCount++;
        }
    };
    
    int newstrlen = (strlen(ipstr)+(dotCount*3))+1;
    char newipstr[newstrlen];

    int tempcounter = 0;

    for(int i=0; i<strlen(ipstr); i++){
        if(ipstr[i]=='.'){
            newipstr[tempcounter++] = '[';
            newipstr[tempcounter++] = '.';
            newipstr[tempcounter++] = ']';
        }else{
            newipstr[tempcounter++] = ipstr[i];
        }
    }

    newipstr[newstrlen] = '\0';

    printf("%s\n", newipstr);
    
    
    
    
    return 0;
}
