//Write a function to check whether a given number contains a given digit or not.(TSRS)

#include <stdio.h>

int digit(int n,int x)
{

while(n!=0)
{
if(n%10==x)
return 1;
n=n/10;
}
return 0;
}

int main()
{
    int n,x;
printf("Enter a number and Digit to check:-");
scanf("%d %d",&n,&x);

if(digit(n,x))
printf("Yes %d is present",x);
else
printf("Not present");

return 0;
}
