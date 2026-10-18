
#include <stdio.h>

int main() {
    float temp[7][4];
    float hottest, coldest;
    int hotDay = 0, hotTime = 0;
    int coldDay = 0, coldTime = 0;
    float noonTotal = 0;

    for (int i = 0; i < 7; i++) {
        printf("Enter temperatures for day %d:\n", i + 1);

        for (int j = 0; j < 4; j++) {
            scanf("%f", &temp[i][j]);
        }
    }

    hottest = temp[0][0];
    coldest = temp[0][0];

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 4; j++) {
            if (temp[i][j] > hottest) {
                hottest = temp[i][j];
                hotDay = i;
                hotTime = j;
            }

            if (temp[i][j] < coldest) {
                coldest = temp[i][j];
                coldDay = i;
                coldTime = j;
            }
        }

        noonTotal += temp[i][1];
    }

    printf("\nHottest: %.2f, Day %d, Time slot %d\n",
           hottest, hotDay + 1, hotTime + 1);

    printf("Coldest: %.2f, Day %d, Time slot %d\n",
           coldest, coldDay + 1, coldTime + 1);

    float noonAverage = noonTotal / 7.0;

    printf("Weekly noon average: %.2f\n", noonAverage);
    printf("Days above noon average:\n");

    for (int i = 0; i < 7; i++) {
        if (temp[i][1] > noonAverage) {
            printf("Day %d\n", i + 1);
        }
    }

    return 0;
}
