#include<stdio.h>
#include<conio.h>
int main()
{
int n;
printf("enter the number");
scanf("%d",&n);
if(n<=0)
{
if(n==0)
{
printf("given number is 0");
}
else
{
printf("enter number is negative");
}
else
{
printf("given number is positive");
}
}
return 0;
}
