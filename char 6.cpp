#include<stdio.h>
int main()
{
	char ch;
	printf("enter any char");
	scanf("%c",&ch);
	ch=ch+1;
	printf("ch=%c %d\n",ch,ch);
	return 1;
}