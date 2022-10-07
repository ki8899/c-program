#include<stdio.h>
#include<conio.h>
int main()
{
 int x,y, *large, *xptr,*yptr;

printf("Enter the value of x and y :");
scanf("%d%d",&x,&y);
xptr=&x;
yptr=&y;
if(*xptr>*yptr)
large=xptr;
else
large=yptr;
printf("The  MAXIMUM nmuber is : %d",*large);
getch();
}
