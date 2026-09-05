/*
*program: check greater no. b/w two no. 
*/
#include<stdio.h>
int main()
{
  int A,B;
  printf("Insert two integers:");
  scanf("%d %d",&A,&B);
  if(A>B)
    printf("large=%d",A);
  else
    printf("large=%d",B);
  return 0;
}
