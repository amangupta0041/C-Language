#include<stdio.h>
 
 main()
 {
     float phy,chem,maths,eng,com,total,ftotal;
     
     printf("enter the value of phy =");
     scanf("%f",&phy);
     
     printf("enter the value of chem =");
     scanf("%f",&chem);
     
     printf("enter the value of maths =");
     scanf("%f",&maths);
     
     printf("enter the value of eng =");
     scanf("%f",&eng);
     
     printf("enter the value of com =");
     scanf("%f",&com);
     
     total = phy+chem+maths+eng+com;
     ftotal = (total/500)*100;
     
     printf("your ftotal is = %.2f %\n",total);
     printf("your per is = %f %", ftotal);
     
     
 }
