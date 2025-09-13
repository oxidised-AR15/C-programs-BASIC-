/*
  Program: Quadratic Equation Roots
  Author: oxidised-AR15
  Date: 2025-09-13
  Description: Finds the roots of a quadratic equation, handling both real and imaginary cases.
*/

#include <stdio.h>
#include <math.h>
int main() {
        int a,b,c;
        float d,r1,r2;
        printf("Enter a (coefficient of x^2):");
        scanf("%d",&a);
        printf("Enter b (coefficient) of x :");
        scanf("%d",&b);
        printf("Enter c :");
        scanf("%d",&c);
        d=((b*b)-(4*a*c));
        r1=((-b)+(sqrt(d)))/(2*a);
        r2=((-b)-(sqrt(d)))/(2*a);
        if (d<0) {
            printf("No real roots possible , Its complex number\n");
        }
        else if (d==0) {
            printf("Two real roots\n");
            printf("1st Root is : %.2f\n2nd Root is : %.2f\n",r1,r2);
        }
        else if (d>0) {
            printf("Two Distinct roots\n");
            printf("1st Root is : %.3f\n2nd Root is : %.2f\n",r1,r2);
        }
        return 0;    

    }
