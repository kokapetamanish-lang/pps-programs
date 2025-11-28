#include<stdio.h>
int main(void)
{
	int n=1;
	while(n<=10)
	{
		n++;
		if(n==5)
		  continue;
		  printf("%d\n",n);
	}
}