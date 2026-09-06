/*
*program: compare 4 no. and print the largest no.
*/
#include<stdio.h>
int main()
{
  int a,b,c,d;
  printf("Insert four numbers:");
  scanf("%d %d %d %d",&a,&b,&c,&d);
  if(a>b)
  {
    if(a>c)
    {
      if(a>d)
        printf("largest=%d",a);
      else
        printf("largest=%d",d);
    } 
    else
    {
      if(c>b)
        printf("largest=%d",c);
      else
        printf("largest=%d",b);
    }
  } 
  else
  {
    if(b>c)
    {
      if(b>d)
        printf("largest=%d",b);
      else
        printf("largest=%d",d);
    }
    else
    {
      if(c>d)
        printf("largest=%d",c);
      else
        printf("largest=%d",d);
    }
  }
return 0;
}
