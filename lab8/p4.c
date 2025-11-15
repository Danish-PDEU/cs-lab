#include <stdio.h>
#include <string.h>

struct Cricketer {
    char name[50];
    int age;
    int testMatches;
    float avgRuns;
};

int main() {
    struct Cricketer c[10], temp;
    int i, j;

    printf("Enter data for 10 cricketers:\n");

    for (i = 0; i < 10; i++) {
        printf("\nCricketer %d:\n", i + 1);

        printf("Name: ");
        fflush(stdin);
        gets(c[i].name);

        printf("Age: ");
        scanf("%d", &c[i].age);

        printf("Number of Test Matches: ");
        scanf("%d", &c[i].testMatches);

        printf("Average Runs: ");
        scanf("%f", &c[i].avgRuns);
    }

    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 10; j++) {
            if (c[i].avgRuns > c[j].avgRuns) {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }

    printf("\nCricketers sorted by Average Runs (Ascending Order):\n");

    for (i = 0; i < 10; i++) {
        printf("\nName: %s\n", c[i].name);
        printf("Age: %d\n", c[i].age);
        printf("Test Matches: %d\n", c[i].testMatches);
        printf("Average Runs: %.2f\n", c[i].avgRuns);
    }
}