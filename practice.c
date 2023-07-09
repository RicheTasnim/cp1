#include<stdio.h>
int main()
{
  int i,n,pos,neg,s;
  printf("\nEnter the starting value:");
  scanf("%d",&i);
  s=i;
  printf("\nEnter the ending value:");
  scanf("%d",&n);
  printf("\nNegative numbers:");
  for(i;i<=n;i++)
  {
  if(i<0)
  {
    printf("\n%d",i);
    neg++;
  }
  }
  i=s;
  printf("\nPositive numbers:");
  for(i;i<=n;i++)
  {
    if(i>0)
    {
      printf("\n%d",i);
      pos++;
    }
  }
  printf("\nTotal number of positive:%d",pos);
  printf("\nTotal number of negative:%d",neg);
  return 0;
}
