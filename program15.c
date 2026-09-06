/*
*program:check n is a prime number or not
*/
#include<stdio.h>
int main()
{
    int n,i=1,x=0;
    printf("Insert the number:");
    scanf("%d",&n);
    while(i<=n)
     {
      if(n%i==0)
        x++;
      i++;
     }
    if(x==2)
     printf("prime number"); 
    else
     printf("not prime number");  
    return 0;
}
