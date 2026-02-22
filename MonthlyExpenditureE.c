/* Print monthly expenditure with constant and input validation
Practical 2, Part 2 (e) 
@ Siddhartha Lama Dong */ 


#include <stdio.h>

int main (){
    float foodExpenses; 
    float leisureExpenses;
    float clothesExpenses;
    float travel; 
    float totalSpent; 

    const int Accommodation = 500; 

    printf("Enter Food Expenses: ");
     if (scanf("%f", &foodExpenses) != 1 || foodExpenses < 0) {
        printf("Invalid input for food expenses.\n");
        return 1;
    }
    printf("Enter Leisure Expenses: "); 
    if (scanf("%f", &leisureExpenses) != 1 || leisureExpenses < 0) {
        printf("Invalid input for leisure expenses.\n");
        return 1;
    }
     printf("Enter Clothes Expenses: "); 
    if (scanf("%f", &clothesExpenses) != 1 || clothesExpenses < 0) {
        printf("Invalid input for clothes expenses.\n");
        return 1;
    }
     printf("Enter Travel Expenses: "); 
    if (scanf("%f", &travel) != 1 || travel < 0) {
        printf("Invalid input for travel expenses.\n");
        return 1;
    }

    totalSpent = foodExpenses + leisureExpenses + clothesExpenses + Accommodation + travel; 

    printf("Fixed Accomodation cost: %d\n", Accommodation);

     printf("The total expenditure of this month was:  %.2f\n", totalSpent);

    return 0; 
}
