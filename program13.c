/*
*program:reversing the digits of an integer
*/
#include<stdio.h>
int main()
{
    int N,mul=0,R;
    printf("Enter the number:");
    scanf("%d",&N);
    while (N>0)
    {
        R=N%10;
        mul=mul*10+R;
        N=N/10;
    }
    printf("reverse of the digit:%d", mul);
    return 0;
}
