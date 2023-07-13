//WAP to print sum 1 to N using while loop.



#include<stdio.h>
main()
{
	  int a =1;
	  int n;
	  int sum =0;
	  printf("enter value :");
	  scanf("%d",&n);
	  
	  while(a<=n)
	  { 
	     printf("%d\n",a);
	     sum= sum + a;
	     a++;
	  }
	  
	  printf("sum is %d", sum);
}
