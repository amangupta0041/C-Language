#include<stdio.h>
main()

{
	int BaseSalery,HRA,DA,TA,Ans;
	
	printf("enter the value of BaseSalery = ");
	scanf("%d",&BaseSalery);
	
	HRA = BaseSalery*10/100;
	DA  = BaseSalery*5/100;
	TA  = BaseSalery*8/100;
	
	Ans = BaseSalery+HRA+DA+TA;
	
	printf("Your salery is : %d",Ans);
	
}
