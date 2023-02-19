//Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0. (TSRS)

#include <stdio.h>

int evenorodd(int n)
{
return (n%2==0);
}
int main()
{
int n;

printf("Enter a number:");
scanf("%d",&n);

if (evenorodd(n)==1)
    printf("Number is even number");

else
    printf("Number is odd number");

return 0;
}
