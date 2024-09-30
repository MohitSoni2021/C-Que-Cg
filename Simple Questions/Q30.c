// 30. Write a program to input an integer 'n' and print the sum of all its even digits and the sum of all its odd digits separately. Example : Input: 'n' = 132456, Output: 12, 9
// Explanation:
// The sum of even digits = 2 + 4 + 6 = 12
// The sum of odd digits = 1 + 3 + 5 = 9


#include <stdio.h>
#include <string.h>


int main()
{
    int n = 123456;
    int c = 0;
    int evenSum = 0;
    int oddSum = 0;
    
    
    while(n>0){
      int rem = n%10;
      if(c%2==0){
        evenSum+=rem;
      }else{
        oddSum+=rem;
      }
      n = (n-(n%10))/10;
      c++;
    }
    
    printf("EvenSum :  %d\noddSum :  %d", evenSum, oddSum);
    
}