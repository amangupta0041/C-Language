//WAP to print thr multiplication table of N using for loop.


#include<stdio.h>
main()
{
	  int a=1;
	  int n;
	  
	  printf("enter value :");
	  scanf("%d",&n);
	  
	  for(a;a<=10;a++)
	  { 
	     printf("%d * %d = %d\n", n , a, (n*a));
	     
      }
	  
	
}
