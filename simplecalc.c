//Basic Calculator using switch-case
#include<stdio.h>
int main(void)
{
	int a, b, add, sub, mul, mod;
	float div;
	char op;
	printf("Enter the operator:");
	scanf("%c",&op);
	printf("Enter any two values:");
	scanf("%d %d" ,&a,&b);
	switch(op)
{
	case '+': add =a+b;
	printf("Addition: %d",add);
	break;
	
	case '-':sub = a-b;
	printf("subtraction: %d",sub);
	break;
	
	case'*': mul =a*b;
	printf("Multiplication: %d",mul);
	break;
	
	case'/' : div = (float)a/b;
	printf("Divition: %f",div);
	break;
	
	case'%' : mod = a%b;
	printf("Remainder: %d",mod);
	break;
	
	default: printf("sorry! Invalid Choice...:(");
    }+
}