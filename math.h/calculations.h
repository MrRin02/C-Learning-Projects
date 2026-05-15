#include <stdio.h>
#include <math.h>

int main(){

double inp, lower , higher, sqr, root;

printf("\nEnter a number: " );

scanf("%lf",&inp);

higher = ceil(inp);
lower = floor(inp);
sqr = sqrt(inp);
root = inp*inp;
printf("\nThe number %f is between %.2f and %.2f", inp , lower , higher);

printf("\nThe square root of the number %f is %f", inp , sqr);

printf("\nThe square of the number %f is %f",inp , root);

return 0;
		
}
