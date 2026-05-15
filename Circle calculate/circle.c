#include <stdio.h>
#define pi 3.14159
int main(){
	
double circumference , area , r , diameter;


printf("Input the diameter of the circle: ");
scanf("%lf", &diameter);

r = diameter/2;
circumference = 2*pi*r;

area = pi*r*r;

printf("\nThe circumference of the table is %.2lf",circumference);
printf("\nThe area of the circle is %.2lf",area);

return 0;
	
	
	
	
	
	

 }
