
#include <stdio.h>

int main() {
    int seats[5][8];
    int totalFree = 0;

    for (int i = 0; i < 5; i++) {
        printf("Enter seats for row %d (0=empty, 1=booked):\n", i + 1);

        for (int j = 0; j < 8; j++) {
            scanf("%d", &seats[i][j]);
        }
    }

    printf("\nSeating Map:\n");

    for (int i = 0; i < 5; i++) {
        int freeSeats = 0;

        for (int j = 0; j < 8; j++) {
            if (seats[i][j] == 0) {
                printf(". ");
                freeSeats++;
            } else {
                printf("X ");
            }
        }

        printf("  Free seats: %d\n", freeSeats);
        totalFree += freeSeats;
    }

    printf("Total free seats: %d\n", totalFree);

    return 0;
}
