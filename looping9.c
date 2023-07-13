
//WAP to print even number from N to 1 using while loop.

#include<stdio.h>
main()
{
	int N,a;
	printf("Enter the value of N = ");
	scanf("%d",&N);
	
	a=1;
	while(N >= a)	
	{
		if(N%2==0)
		{
			printf("%d ",N);
		}
		
		N--;
		
	}
	
	
}
