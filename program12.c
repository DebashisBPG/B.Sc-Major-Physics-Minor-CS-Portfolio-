/*
*program:sum of the digits of an integer
*/
#include <stdio.h>
int main() 
{
  int N,sum=0,R;
  printf("Enter the number:");
  scanf("%d",&N);
  while(N>0) 
   {
    R = N % 10;
    sum = sum + R; 
    N = N / 10;  
   }
  printf("Sum of the digits: %d",sum);
  return 0;
}
