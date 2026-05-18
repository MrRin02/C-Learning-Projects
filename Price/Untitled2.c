#include <stdio.h>

int main(){
	
int price = 10;
int quantity;
double total_price;
printf("\nEnter the number that you want to buy: ");
scanf("%d",&quantity);
total_price = (quantity*price*(quantity>10 && quantity<20 ? 0.95 : || quantity>20 && quantity < 50 ? 0.90 : || quantity>50 ? 0.85 : 1.0 ));

printf("\nThe price for %d is %lf ",quantity , total_price);

return 0;
}
