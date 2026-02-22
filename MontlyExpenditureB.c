/* Print monthly expenditure with personal values
Practical 2, Part 2 (b) 
@ Siddhartha Lama Dong */ 


#include <stdio.h>

int main (){
    float foodExpences = 250.0; 
    float leisureExpenses = 120.0;
    float clothesExpenses = 80.0; 
    float totalSpent; 

    totalSpent = foodExpences + leisureExpenses + clothesExpenses;

    printf("The total expenditure this month was %.2f\n\n", totalSpent);

    return 0; 
}