//WAP to print N to 1 using while loop.

#include<stdio.h>
main()
{
	
	int N,a;
	printf("Enter the value of N = ");
	scanf("%d",&N);
	
	a=1;
	while(a >= N)	
	{
		printf("%d ",a);
		a--;
		
	}
	
	
}
