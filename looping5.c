//WAP to Find leap year from 2000 to 3000 using while loop.

#include<stdio.h>
main()
 { 
   int x = 2000;
   
   
   while(x <= 3000)
   { 
     if(x%4==0)
     { 
        printf("%d ",x);
        
	 }
	 x++;
   }
 }
