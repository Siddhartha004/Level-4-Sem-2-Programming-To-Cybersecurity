/* StudentScoresC.c
   Practical 6, Part 1 (c)
   Finding maximum and minimum scores
   @Siddhartha Lama Dong */

#include <stdio.h>

#define NUM_STUDENTS 5

int main() {
    int scores[NUM_STUDENTS];
    int sum = 0;
    double average;

    printf("Enter %d student scores:\n", NUM_STUDENTS);
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Score %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    for (int i = 0; i < NUM_STUDENTS; i++) {
        sum += scores[i];
    }

    average = (double)sum / NUM_STUDENTS;

    printf("\nIndividual Scores:\n");
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Student %d: %d\n", i + 1, scores[i]);
    }

    printf("\nSum: %d\n", sum);
    printf("Average: %.2lf\n", average);

    int maxScore = scores[0];
    int maxIndex = 0;
    for (int i = 1; i < NUM_STUDENTS; i++) {
        if (scores[i] > maxScore) {
            maxScore = scores[i];
            maxIndex = i;
        }
    }

    int minScore = scores[0];
    int minIndex = 0;
    for (int i = 1; i < NUM_STUDENTS; i++) {
        if (scores[i] < minScore) {
            minScore = scores[i];
            minIndex = i;
        }
    }

    printf("\nStatistics:\n");
    printf("Highest score: %d (Student %d)\n", maxScore, maxIndex + 1);
    printf("Lowest score: %d (Student %d)\n", minScore, minIndex + 1);

    return 0;
}