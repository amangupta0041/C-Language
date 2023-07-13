//WAP to calculate the factorial of N using while loop.


#include<stdio.h>
main()
{
	  int a =1;
	  int n;
	  int sum =1;
	  printf("enter value :");
	  scanf("%d",&n);
	  
	  while(a<=n)
	  { 
	     printf("%d\n",a);
	     sum= sum * a;
	     a++;
	  }
	  
	  printf("sum is %d", sum);
}
