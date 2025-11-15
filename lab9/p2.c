#include <stdio.h>

int main() {
    FILE *fp;
    char line[200];

    fp = fopen("output.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!");
        return 0;
    }

    printf("Enter lines (type 'end' to stop):\n");

    while (1) {
        gets(line);

        if (strcmp(line, "end") == 0)   // stop condition
            break;

        fputs(line, fp);
        fputs("\n", fp);  // add newline after each line
    }

    fclose(fp);

    printf("Data written to file successfully.\n");
}