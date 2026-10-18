
#include <stdio.h>

int main() {
    char titles[5][50];
    int copies[5];
    char letter;

    for (int i = 0; i < 5; i++) {
        printf("Enter title of book %d: ", i + 1);
        scanf(" %[^\n]", titles[i]);

        printf("Enter number of copies: ");
        scanf("%d", &copies[i]);
    }

    printf("\n%-30s %s\n", "Book Title", "Copies");
    printf("------------------------------------------\n");

    for (int i = 0; i < 5; i++) {
        printf("%-30s %d\n", titles[i], copies[i]);
    }

    printf("\nVowel Counts:\n");

    for (int i = 0; i < 5; i++) {
        int vowels = 0;

        for (int j = 0; titles[i][j] != '\0'; j++) {
            char ch = titles[i][j];

            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u' || ch == 'A' ||
                ch == 'E' || ch == 'I' || ch == 'O' ||
                ch == 'U') {
                vowels++;
            }
        }

        printf("%s: %d vowels\n", titles[i], vowels);
    }

    printf("\nEnter a letter to search titles: ");
    scanf(" %c", &letter);

    printf("Titles starting with %c:\n", letter);

    for (int i = 0; i < 5; i++) {
        if (titles[i][0] == letter) {
            printf("%s\n", titles[i]);
        }
    }

    int mostCopies = 0;

    for (int i = 1; i < 5; i++) {
        if (copies[i] > copies[mostCopies]) {
            mostCopies = i;
        }
    }

    printf("\nTitle with most copies: %s\n", titles[mostCopies]);
    printf("Copies: %d\n", copies[mostCopies]);

    return 0;
}
