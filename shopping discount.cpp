#include<stdio.h>
 int main(void)
 {
 	float actualprice,discount,finalprice;
 	printf("enter the actualprice:",actualprice);
 	scanf("%f",&actualprice);
 	
 	if(actualprice>=5000)
 	  discount=actualprice*0.20;
 	else if(actualprice>=2000)
 	  discount=actualprice*0.10;
 	else if(actualprice<2000)
 	  discount=actualprice*0.05;
 	else
 	   printf("invalid price entry");
 	  
 	  finalprice=actualprice-discount;
 	  printf("actualprice is %f\n",actualprice);
 	  printf("discount is %f\n",discount);
 	  printf("finalprice is %f",finalprice);
 	
 }