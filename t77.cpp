
#include <stdio.h>

int main() {
    int marks[3][4][5];
    float deptTotal[3] = {0};
    float highestAverage = -1;
    int bestDept = 0;

    for (int d = 0; d < 3; d++) {
        printf("\nDepartment %d:\n", d + 1);

        for (int s = 0; s < 4; s++) {
            printf("Enter 5 marks for student %d:\n", s + 1);

            for (int j = 0; j < 5; j++) {
                scanf("%d", &marks[d][s][j]);
            }
        }
    }

    for (int d = 0; d < 3; d++) {
        int topper = 0;
        int highestTotal = -1;
        int departmentTotal = 0;

        printf("\nDepartment %d results:\n", d + 1);

        for (int s = 0; s < 4; s++) {
            int total = 0;
            int failed = 0;

            for (int j = 0; j < 5; j++) {
                total += marks[d][s][j];

                if (marks[d][s][j] < 40) {
                    failed = 1;
                }
            }

            float average = total / 5.0;

            printf("Student %d: Average = %.2f",
                   s + 1, average);

            if (failed) {
                printf(" FAIL");
            }

            printf("\n");

            if (total > highestTotal) {
                highestTotal = total;
                topper = s;
            }

            departmentTotal += total;
        }

        printf("Department topper: Student %d\n", topper + 1);

        deptTotal[d] = departmentTotal / 20.0;

        printf("Department average: %.2f\n", deptTotal[d]);

        if (deptTotal[d] > highestAverage) {
            highestAverage = deptTotal[d];
            bestDept = d;
        }
    }

    printf("\nDepartment with highest average: %d\n", bestDept + 1);
    printf("Highest department average: %.2f\n", highestAverage);

    return 0;
}
