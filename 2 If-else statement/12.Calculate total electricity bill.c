/*Write a C program to input electricity unit charges and calculate total elec-
tricity bill according to the given condition:

For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.*/

#include<stdio.h>
int main()
{
    double unit,bill,total;

    printf("Enter Unit :");
    scanf("%lf",&unit);
    if(unit<=50)
    {
        bill=unit*.50;
    }
    else if(unit>50&&unit<=150)
    {
        bill=(50*.5)+(unit-50)*.75;
    }
    else if(unit>150 && unit<=250)
    {
        bill=(50*.5)+(100*.75)+(unit-150)*1.2;
    }
    else if(unit>250)
    {
        bill=unit*1.5;
    }
    total=bill+.2*bill;
    printf("TOTAL BILL=%.2lf\n",total);



}
