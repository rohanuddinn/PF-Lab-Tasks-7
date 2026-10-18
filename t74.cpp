
#include <stdio.h>

int main() {
    int sales[3][5];
    int branchTotal[3] = {0};
    int productTotal[5] = {0};

    for (int i = 0; i < 3; i++) {
        printf("Enter sales for branch %d:\n", i + 1);

        for (int j = 0; j < 5; j++) {
            scanf("%d", &sales[i][j]);

            branchTotal[i] += sales[i][j];
            productTotal[j] += sales[i][j];
        }
    }

    int bestBranch = 0;
    int lowestProduct = 0;

    printf("\nBranch Totals:\n");

    for (int i = 0; i < 3; i++) {
        printf("Branch %d: %d\n", i + 1, branchTotal[i]);

        if (branchTotal[i] > branchTotal[bestBranch]) {
            bestBranch = i;
        }
    }

    printf("\nProduct Totals:\n");

    for (int j = 0; j < 5; j++) {
        printf("Product %d: %d\n", j + 1, productTotal[j]);

        if (productTotal[j] < productTotal[lowestProduct]) {
            lowestProduct = j;
        }
    }

    printf("Best-selling branch: Branch %d\n", bestBranch + 1);
    printf("Lowest-selling product: Product %d\n", lowestProduct + 1);

    return 0;
}
