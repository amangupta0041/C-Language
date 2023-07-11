//. Write C program to input any character and check whether it is alphabet, digit or special character.

#include<stdio.h>
main()

{
	char x;
	printf("Enter the value :- ");
	scanf("%c",&x);
	
	if(x>=65 && x<=90 || x>=97 && x<=122)
	{
		printf("user enter the alfabate");
		
	}
	
	else if(x>=48 && x<=57)
	{
		printf("user enter the digite");
	}
	
	else
	{
		printf("user enter the special charectore");
	}
	
}
