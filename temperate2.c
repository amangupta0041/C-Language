//Write C program to print multiplication table of any number.

#include<stdio.h>
main()
{
	  int a =1;
	  int n;
	  
	  printf("enter value :");
	  scanf("%d",&n);
	  
	  while(a<=10)
	  { 
	     printf("%d * %d = %d\n", n , a, (n*a));
	     a=a+1;
      }
	  
	
}
