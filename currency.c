#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,e=0,f,g=0,h,i,j=0;
clrscr();
scanf("%d",&a);
if(a<=1000)
{
b=a/500;
c=a%500;
d=c/100;
e=c%100;
f=e/50;
g=e%50;
i=g/10;
j=g%10;
printf("%d",b+d+f+i+j);
}
getch();
}
