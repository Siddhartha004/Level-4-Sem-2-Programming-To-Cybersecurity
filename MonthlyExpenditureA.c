/* Print monthly expenditure 
Practical 2, Part 2 (a) 
@ Siddhartha Lama Dong */ 

#include <stdio.h>

int main (){
    float foodExpences = 300.0; 
    float leisureExpenses = 100.0;
    float clothesExpenses = 50.0; 
    float totalSpent; 

    totalSpent = foodExpences + leisureExpenses + clothesExpenses;

    printf("The total expenditure this month was %.2f\n\n", totalSpent);

    return 0; 
}