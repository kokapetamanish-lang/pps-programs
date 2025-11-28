#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter 3 sides");
	scanf("%d%d%d",&a,&b,&c);
	if(a==0::b==0::c==0)
	{
		printf("it is not possible");
	}
	else if((a+b>=c)&&(b+c>=a)&&(c+a>=b));
	{
		if(a==b&&b==c)
	{
		printf("equilateral");
	}
	else if(a==b::b==c::c==a)
	{
		printf("isocelles");
	 } 
	else
	{
		printf("scalane");
	}
	else
	{
		printf("no triangle forms");
	}
	return1;
		}
		
		