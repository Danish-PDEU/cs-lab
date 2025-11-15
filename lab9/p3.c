#include <stdio.h>

int main() {
    FILE *fp;
    char line[300];

    fp = fopen("output.txt", "r");  // open file for reading
    if (fp == NULL) {
        printf("Error opening file!");
        return 0;
    }

    printf("Contents of the file:\n\n");

    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);   // print each line
    }

    fclose(fp);
}