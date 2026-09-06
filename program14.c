/*
*program:find all the perfect numbers between 1 to 10,000
*/
#include<stdio.h>
int main()
{
  int N=1,sum,i;
  while(N<=10000)
  {
    i=1;
    sum=0;
    while(i<=N/2)
    {
      if(N%i==0)
        sum=sum+i;
      i++;  
    }  
    if(sum==N)
      printf("%d \t",N);
    N++;  
  }
  return 0;
}
