/*
  Program: Electricity Bill Calculator
  Author: oxidised-AR15
  Date: 2025-09-13
  Description: Calculates electricity bill based on units consumed using conditional logic.
*/
// From 0 to 100 units bill is free but have to give confirmed charge of 300 Rs and above it 300 fixed charge plus per units charge after usage of 100 units according to slab will be your total bill.

#include <stdio.h>
int main() {
    int units,u,charge=300;
    float bill;
    printf("Enter electricity units consumed :");
    scanf("%d", &units);
    if (units<=100) {
        bill=charge;    
        printf("Bill is :Rs %.2f",bill);
    }
    else if ((units>100)&&(units<=200)) {
        u=units-100;
        bill=(u*0.50)+300;   
        printf("Bill is :Rs %.2f",bill);
    }
    else if ((units>200)&&(units<=300)) {
        u=units-100;
        bill=(u*0.80)+300;
        printf("Bill is :Rs %.2f Rs",bill);
    }
    else {
        u=units-100;
        bill=u+300;
        printf("Bill is :Rs %.2f Rs",bill);
    }
    return 0;

}
