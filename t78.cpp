
#include <stdio.h>

int main() {
    int stock[3][4][5];
    int fullestBuilding = 0;
    int fullestShelf = 0;
    int maxStock = -1;

    for (int b = 0; b < 3; b++) {
        for (int s = 0; s < 4; s++) {
            printf("Building %d, Shelf %d:\n", b + 1, s + 1);

            for (int k = 0; k < 5; k++) {
                scanf("%d", &stock[b][s][k]);
            }
        }
    }

    printf("\nBuilding Totals:\n");

    for (int b = 0; b < 3; b++) {
        int buildingTotal = 0;

        for (int s = 0; s < 4; s++) {
            int shelfTotal = 0;

            for (int k = 0; k < 5; k++) {
                shelfTotal += stock[b][s][k];

                if (stock[b][s][k] < 5) {
                    printf("Needs restock: [%d][%d][%d]\n",
                           b + 1, s + 1, k + 1);
                }
            }

            buildingTotal += shelfTotal;

            if (shelfTotal > maxStock) {
                maxStock = shelfTotal;
                fullestBuilding = b;
                fullestShelf = s;
            }
        }

        printf("Building %d total: %d\n",
               b + 1, buildingTotal);
    }

    printf("Fullest shelf: Building %d, Shelf %d\n",
           fullestBuilding + 1, fullestShelf + 1);
    printf("Items on fullest shelf: %d\n", maxStock);

    return 0;
}
