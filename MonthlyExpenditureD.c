/* Print monthly expenditure  with user input
Practical 2, Part 2 (d) 
@ Siddhartha Lama Dong*/ 


#include <stdio.h>

int main (){
    float foodExpences; 
    float leisureExpenses;
    float clothesExpenses;
    float accommodation;
    float travel; 
    float totalSpent; 

    printf("Enter Food Expenses: ");
    scanf("%f", &foodExpences);
    printf("Enter Leisure Expenses: "); 
    scanf("%f", &leisureExpenses);
     printf("Enter Clothes Expenses: "); 
    scanf("%f", &clothesExpenses);
     printf("Enter Accomodation Expenses: "); 
    scanf("%f", &accommodation);
     printf("Enter Travel Expenses: "); 
    scanf("%f", &travel);

    totalSpent = foodExpences + leisureExpenses + clothesExpenses +accommodation + travel; 

     printf("The total expenditure of this month was %.2f\n", totalSpent);
    return 0; 
}