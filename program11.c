/*
*program:find the factorial of N
*/
#include<stdio.h>
int main()
{
  int N,i=1,mul=1;
  printf("Insert the number:");
  scanf("%d",&N);
  while(i<=N)
   {
    mul=mul*i;
    i++;
   }
  printf("factorial=%d",mul);
  return 0;
}
