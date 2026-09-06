/*
*program:print divion when percentage given ,if percentage>=60 is 1st division,>=45 is 2nd division,>=30 is 3rd division ,<30 is fail
*/
#include<stdio.h>
int main()
{
  int p;
  printf("Insert percentage:");
  scanf("%d",&p);
  if(p>=60)
    printf("1st division");
  else
  {
    if(p>=45)
      printf("2nd division");
    else
    {
      if(p>=30)
        printf("3rd division");
      else
        printf("fail");
    }
  }
return 0;
}
