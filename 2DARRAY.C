/*write a program to enter to 3 by matix and print a sum of it */
#include<stdio.h>
#include<conio.h>
void main()
{
 int m1[3][3],m2[3][3],m3[3][3],i,j;
 clrscr();
 // input value into two d array
 for(i=0;i<3;i++) //row
 {
  for(j=0;j<3;j++)//colum
  {
   printf("\nenter value m1[%d][%d]",i,j);
   scanf("%d",&m1[i][j]);
  }
 }

 // Input value for matrix 2

 for(i=0;i<3;i++) //row
 {
  for(j=0;j<3;j++)//colum
  {
   printf("\nenter value m2[%d][%d]",i,j);
   scanf("%d",&m2[i][j]);
  }
 }

 //Print Matrix 1
 for(i=0;i<3;i++)
 {
    for(j=0;j<3;j++)
    {
       printf("%d\t",m1[i][j]);
    }
    printf("\n");
 }
   getch();
}

