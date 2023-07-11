#include<stdio.h>
int main()
{
	/*WAP to Find maximum from given 4 number using
nested if else.*/

	int a,b,c,d;
	
	printf("Enter the value of a = ");
	scanf("%d",&a);	
	
	printf("Enter the value of b = ");
	scanf("%d",&b);
	
	printf("Enter the value of c = ");
	scanf("%d",&c);
	
	printf("Enter the value of d = ");
	scanf("%d",&d);
	
	if(a>b)//a,b,c,d
	{
		if(a>c)//a,c,d
		{
			if(a>d)//a,d
			{
				printf("a is maximum");
			}
			else
			{
				printf("d is maximum");
			}
		}
		else
		{
			if(c>d)//c,d
			{
				printf("c is maximum");	
			}
			else
			{
				printf("d is maximum");
			}
		}
	}
	else//b,c,d
	{
		if(b>c)//b>c
		{//b,d
			if(b>d)
			{
				printf("b is maximum");
			}
			else
			{
				printf("d is maximum");
			}
		}
		else
		{
			if(c>d)
			{
				printf("c is maximum");
			}
			else
			{
				printf("d is max1imum");
			}
		}	
	}

}
