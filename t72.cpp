
#include <stdio.h>

int main() {
    int marks[6][4];
    int subjectTotal[4] = {0};
    int bestSubject = 0;

    for (int i = 0; i < 6; i++) {
        printf("Enter marks for student %d:\n", i + 1);

        for (int j = 0; j < 4; j++) {
            scanf("%d", &marks[i][j]);
            subjectTotal[j] += marks[i][j];
        }
    }

    printf("\nStudent Results:\n");

    for (int i = 0; i < 6; i++) {
        int total = 0;

        for (int j = 0; j < 4; j++) {
            total += marks[i][j];
        }

        printf("Student %d: Total = %d, Average = %.2f\n",
               i + 1, total, total / 4.0);
    }

    printf("\nSubject Class Averages:\n");

    for (int j = 0; j < 4; j++) {
        printf("Subject %d: %.2f\n",
               j + 1, subjectTotal[j] / 6.0);

        if (subjectTotal[j] > subjectTotal[bestSubject]) {
            bestSubject = j;
        }
    }

    printf("Best subject: Subject %d\n", bestSubject + 1);

    return 0;
}
