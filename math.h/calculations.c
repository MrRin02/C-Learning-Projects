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
printf("\nThe number %f is between %.f and %.f", inp , lower , higher);

printf("\nThe square root of the number %.3f is %.3f", inp , sqr);

printf("\nThe square of the number %.3f is %.3f",inp , root);

return 0;
		
}
