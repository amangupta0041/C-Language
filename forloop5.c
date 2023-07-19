#include<stdio.h>
main()

//2,4,8,16......for

{
	int a=2;
	int n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	
	for(a;a<=n;a*=2)
	{
		printf("%d ",a);
	}
	
}
	
	
	
