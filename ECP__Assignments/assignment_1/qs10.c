#include<stdio.h>
#include<math.h>


	
int main()
{
    float a, b, c, s, area;

    // Input sides of triangle
    printf("Enter the value of a: ");
    scanf("%f", &a);

    printf("Enter the value of b: ");
    scanf("%f", &b);

    printf("Enter the value of c: ");
    scanf("%f", &c);

    // Semi-perimeter
    s = (a + b + c) / 2;

    // Area using Heron's formula
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("Area of the triangle: %.2f\n", area);

    return 0;
}


