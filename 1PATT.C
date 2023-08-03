/* print squre star */
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n;
clrscr();
printf("Enter number of rows: ");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
  for(j=1;j<=n;j++)
  {
   printf("*");
  }
printf("\n");
}
getch();
}