/*
*program: to check a number is even or not 
*/
#include<stdio.h>
int main()
{
  int A;
  printf("Insert the number:");
  scanf("%d",A);
  if(A%2==0)
    printf("%d is an even number",A);
  else
    printf("%d is not an even number",A);
  return 0;
}
