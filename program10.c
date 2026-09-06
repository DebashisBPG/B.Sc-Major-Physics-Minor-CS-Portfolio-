/*
*program:print multiplication of N inserted numbers
*/
#include<stdio.h>
int main()
{
  int N,i=1,mul=1,no;
  printf("How many numbers?:");
  scanf("%d",&N);
  while(i<=N)
  {
    printf("Insert %d number:",i);
    scanf("%d",&no);
    mul=mul*no;
    i++;
  }
  printf("=%d",mul);
  return 0;  
}
