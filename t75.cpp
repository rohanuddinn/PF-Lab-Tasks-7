
#include <stdio.h>

int main() {
    int rooms[4][6];

    for (int i = 0; i < 4; i++) {
        printf("Enter rooms for floor %d (1=occupied, 0=vacant):\n", i + 1);

        for (int j = 0; j < 6; j++) {
            scanf("%d", &rooms[i][j]);
        }
    }

    int maxVacancies = -1;
    int bestFloor = 0;

    for (int i = 0; i < 4; i++) {
        int vacancies = 0;

        for (int j = 0; j < 6; j++) {
            if (rooms[i][j] == 0) {
                vacancies++;
            }
        }

        printf("Floor %d vacancies: %d\n", i + 1, vacancies);

        if (vacancies > maxVacancies) {
            maxVacancies = vacancies;
            bestFloor = i;
        }
    }

    printf("Floor with most vacancies: Floor %d\n", bestFloor + 1);

    int found = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j <= 3; j++) {
            if (rooms[i][j] == 0 &&
                rooms[i][j + 1] == 0 &&
                rooms[i][j + 2] == 0) {

                printf("Floor %d, starting room %d\n",
                       i + 1, j + 1);
                found = 1;
            }
        }
    }

    if (found == 0) {
        printf("No 3 consecutive vacant rooms found.\n");
    }

    return 0;
}
