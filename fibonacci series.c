#include<stdio.h>
void main()
{
	int n1=0,n2=1,n3,n,i;
	printf("enter length of fibonacci series");
	scanf("%d",&n);
	printf("fibonacci series is \n");
	scanf("%d\t%d",n1,n2);
	for(i=1;i<n-2;i++)
	{
		n3=n2+n1;
		printf("\t%d",n3);
		n1=n2;
		n2=n3;
	}
}