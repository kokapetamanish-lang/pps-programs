#include<stdio.h>
int main(void)
{
	int n=1,num,fact=1;
	printf("enter the num:");
	scanf("%d",num);
	while(n<=num)
	{
		fact=fact*n;
		n++;
    }
	 printf("factorial of %d is %d",num,fact);
    
}