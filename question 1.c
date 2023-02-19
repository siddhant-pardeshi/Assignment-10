//Write a function to calculate the area of a circle. (TSRS)

#include <stdio.h>

float area(float radius)
{
return 3.14*radius*radius;
}

int main()
{
float r;
printf("Enter radius of circle:");
scanf("%f",&r);

printf("Area of circle is %f",area(r));

return 0;
}
