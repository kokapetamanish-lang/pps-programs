#include<stdio.h>
 int main(void)
 {
 	 int a,b,add,sub,mul,mod;
 	 float div;
 	 char op;
 	 printf("ENTER THE OPERATOR:");
 	 scanf("%c",&op);
 	 printf("ENTER ANY TWO VALUES TO PERFORM operation:",a,b);
 	 scanf("%d,%d",&a,&b);
	  switch(op)
	  {
	  	case '+':  add = a+b;
	  	           printf("addition is %d",add);
	  	           break;
	  	        
	  	case '-':   sub = a-b;
		            printf("subtraction is %d", sub);    
					break;
					
		case '*':   mul = a*b;
		            printf("multiplication is %d",mul);
					break;
					
		case  '%':   mod = a%b;
	                printf("remainder is %d",mod);
					break;
		
		case  '/':    div = (float)a/b;
		              printf("division is %f",div);
					  break;
					  
		default:  printf("sorry invalid option");
					
    	} 
	}