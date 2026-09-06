/*
*program:print the sum of total N inserted no.
*/
#include<stdio.h>
int main()
{
  int N,no,i=1,sum=0;
  printf("How many numbers you want to add:");
  scanf("%d",&N);
  while(i<=N)
  {
    printf("Insert the %d number:",i);
    scanf("%d",&no);
    sum=sum+no;
    i++;
  }
  printf("sum=%d",sum);
  return 0;
}
