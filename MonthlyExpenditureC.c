/* Print monthly expenditure with more categories
Practical 2, Part 2 (c) 
@ Siddhartha Lama Dong */ 


#include <stdio.h>

int main (){
    float foodExpenses = 250.0; 
    float leisureExpenses = 120.0;
    float clothesExpenses = 80.0;
    float accommodation = 500.0;
    float travel = 150.0; 
    float totalSpent; 

    totalSpent = foodExpenses + leisureExpenses + clothesExpenses + accommodation + travel;

    printf("The total expenditure this month was %.2f\n\n", totalSpent);

    return 0; 
}