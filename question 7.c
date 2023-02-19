//Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)

#include<stdio.h>

int fact(int x)
{
int f=1,i;

for(i=1;i<=x;i++)
{
    f=f*i;
}
return f;
}

int comb(int n,int r)
{
return fact(n)/(fact(r)*fact(n-r));
}

int main()
{
int n,r;
printf("Enter number n and r:\n");
scanf("%d %d",&n,&r);

printf("Combinations are %d",comb(n,r));

return 0;
}
