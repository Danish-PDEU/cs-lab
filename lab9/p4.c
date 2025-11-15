#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    int roll, choice;
    char name[100];

    fp = fopen("students.csv", "w");
    if (fp == NULL) {
        printf("File cannot be opened!");
        return 0;
    }

    fprintf(fp, "Roll_No,Name\n");

    while (1) {
        printf("\nEnter Roll Number: ");
        scanf("%d", &roll);

        fflush(stdin);
        printf("Enter Name: ");
        gets(name);

        fprintf(fp, "%d,%s\n", roll, name);

        printf("Do you want to enter another record? (1 = Yes, 0 = No): ");
        scanf("%d", &choice);

        if (choice == 0)
            break;
    }

    fclose(fp);

    printf("\nRecords saved in 'students.csv' successfully!\n");
    printf("You can open this file directly in MS-Excel.\n");
}