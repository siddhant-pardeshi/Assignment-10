//Write a function to calculate the factorial of a number. (TSRS)

#include <stdio.h>

int fact(int x)
{
int f=1,i;

for(i=1;i<=x;i++)
{
    f=f*i;
}
return f;
}
int main()
{
int x;
printf("Enter a number:");
scanf("%d",&x);

printf(" Factorial is %d",fact(x));

return 0;
}

