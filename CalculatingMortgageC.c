/*CalculatingMortgageC.c
Pratical 4 Part 1 (c)
Siddhartha Lama Dong
*/

#include <stdio.h>

double largerSalary(double salary1, double salary2);
double smallerSalary(double salary1, double salary2);

int main (){
    double salary1, salary2, mortgage; 

    printf("Enter two salaries: \n");
    scanf("%lf %lf, &salary1, &salary2");

    mortgage = largerSalary(salary1, salary2) * 3; 
    mortgage += smallerSalary(salary1, salary2);

    printf("The minimum size of mortgage is: £ %.2lf\n", mortgage);
    return 0; 
}

double largersalary(double salary1, double salary2){
    if (salary1 > salary2)
    return salary1;
    else 
    return salary2;
}

double smallerSalary(double salary1, double salary2){
    
    if (salary1 > salary2)
    return salary2;
    else 
    return salary1; 
}