/* print Hollow Square Star Pattern with Diagonal */
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
   if(i==1 || i==n || j==1 || j==n || i==j || j==(n-i+1))
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