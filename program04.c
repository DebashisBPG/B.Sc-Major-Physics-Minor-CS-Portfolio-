/*
*program:check greatest number between 3 given numbers 
*/
#include<stdio.h>
int main()
{
  int A,B,C;
  printf("Insert three numbers:");
  scanf("%d %d %d",&A,&B,&C);
  if(A>B)
   {
    if(A>C)
      printf("largest=%d",A);
    else
      printf("largest=%d",C);
   }
  else
   {
   if(B>C)
     printf("largest=%d",B);
   else
     printf("largest=%d",C);
   }
  return 0;
}
