#include<stdio.h>
int main(void)
{
	float actualPrice, finalPrice, discount;
	printf("Enter Actual Price:");
	scanf("%f",&actualPrice);
	if(actualPrice>=5000)
	   discount = actualPrice*20/100;
	   else if (actualPrice>=2000 && actualPrice<5000)
	   discount = actualPrice*10/100;
	   else if(actualPrice<2000)
	   discount = actualPrice*5/100;
	   finalPrice = actualPrice-discount;
	   printf("Discount: %f",finalPrice);
	   printf("\nFinal Price: %f",finalPrice);
}