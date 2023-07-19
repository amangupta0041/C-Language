//WAP to print even number from N to 1 using for loop.

#include<stdio.h>
main()
{
	int N,a;
	printf("Enter the value of N = ");
	scanf("%d",&N);
	
	
        for(a=N;a>=0;a--)
		{
		 if(a%2==0)
		 {
		 	printf("%d ",a);
       	 }
		}
		
	
}
