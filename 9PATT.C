/* print Hollow Right Triangle Star Pattern */
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
  for(j=1;j<=i;j++)
  {
  if(j==1 || j==i || i==n)
  {
     printf("*");
  }
  else
   {
     printf(" ");
   }
  }
  printf("\n");
}
getch();
}