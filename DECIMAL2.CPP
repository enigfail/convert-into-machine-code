#include<stdio.h>
#include<conio.h>
void main()
{
int d, b[20],i,j;
clrscr();
printf("input the decimal number:");
scanf("%d",&d);
i=0;
while (d>0)
{
  b[i]=d%2;
  d=d/2;
  i++;
  }
  printf("binary equivalent:");
  for(j=i-1;j>=0;j--)
  printf("%d",b[j]);
  getch();
  }