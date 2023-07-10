//Write a C program to input electricity unit charges and calculate the total electricity bill according to the given condition:
//For the first 50 units Rs. 0.50/unit
//For the next 100 units Rs. 0.75/unit
//For the next 150 units Rs. 1.25/unit
//For units above 250 Rs. 1.50/unit
//An additional surcharge of 20% is added to the bill.

 
#include<stdio.h>
 
 main()
{
    int unit;
    double amt, total_amt, sur_charge;


    printf("Enter total units consumed: ");
    scanf("%d", &unit);


    if(unit <= 50)
    {
        amt = unit * 0.50;
    }
    else if(unit <= 150)
    {
        amt = 25 + ((unit-50) * 0.75);
    }
    else if(unit <= 250)
    {
        amt = 100 + ((unit-150) * 1.20);
    }
    else
    {
        amt = 220 + ((unit-250) * 1.50);
    }


    sur_charge = amt * 0.20;
    total_amt  = amt + sur_charge;

    printf("Electricity Bill = Rs. %.2f", total_amt);

  
}
