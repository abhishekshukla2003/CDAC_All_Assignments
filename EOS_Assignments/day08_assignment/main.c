#include<stdio.h>
#include"square.h"
#include"circle.h"
#include"rectangle.h"

int main(){
	double r = 5.0;
	double s = 4.0;
	double l = 6.0, w=3.0;

	printf("Circle area %.2f\n", circle_area(r));
	printf("Square area %.2f\n", square_area(s));
	printf("Rectangle area %.2f\n", rectangle_area(l,w));

	return 0;


}
