/*
*program: insert N amount of numbers and print the highest number
*/
#include<stdio.h>
int main()
{
  int N,no,max,i=1;
  printf("How many numbers?:");
  scanf("%d",&N);
  printf("Insert 1st number:");
  scanf("%d",&max);
  while(i<N)
  { 
    printf("Insert %d of number:",i+1);
    scanf("%d",&no);
    if(no>max)
      max=no;
    i++;
  }
  printf("Max=%d",max);
  return 0;
}
