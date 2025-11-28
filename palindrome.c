//palindrome Program
#include<stdio.h>
int main(void)
{
	int num, rem, rev=0, temp;
	printf("Enter any number:");
	scanf("%d",&num);
	temp=num;
	//Reverse of the Number
	while(num>0)
	{
		rem=num%10;
		rev=(rev*10)+rem;
		num=num/10;
	}
	if(rev==temp)
	printf("%d is a palindrome",temp);
	else
	printf("%d is not a palindrome",temp);
}