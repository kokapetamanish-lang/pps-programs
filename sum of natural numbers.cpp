#include<stdio.h>
int main(void)
{
	int n=1,limit,sum=0;
	printf("enter the limit:");
	scanf("%d",&limit);
	while(n<=limit)
	{
	sum=sum+n;
	n++;
    }
    printf("sum=%d",sum);
}