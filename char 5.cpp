#include<stdio.h>
int main()
{
	char ch;
	printf("enter any char :");
	scanf("%c",&ch);
	if(ch>=97&&ch<=122||ch>=32&&ch<=96)
	{
		printf("it is alphabet");
	}
	else
	{
		printf("it is not an alphabet");
	}
	return 1;
}