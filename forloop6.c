//WAP to print sum 1 to N using for loop.

#include<stdio.h>
main()
{
	  int a = 1;
	  int n;
	  int sum =0;
	  printf("enter value :");
	  scanf("%d",&n);
	  
	  for(a;a<=n;a++)
	  { 

	     sum = sum + a;
	     
	  }
	
	   printf("%d ", sum);
}
