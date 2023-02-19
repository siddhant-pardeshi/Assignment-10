//Write a function to calculate simple interest. (TSRS)

#include <stdio.h>

float simpleinterest(float p,float r,float t)
{
return (p*r*t)/100;
}
int main()
{
float p,r,t;

printf("Enter principle,rate and time respectively:-");
scanf("%f %f %f",&p,&r,&t);

printf("Simple interest is %f",simpleinterest(p,r,t));

return 0;

}
