#include <stdio.h>

int main() {
    char gender;
    int boys = 0, girls = 0;

    printf("Enter gender code for 50 students (M for boy, F for girl):\n");

    for (int i = 1; i <= 50; i++) {
        printf("Student %d: ", i);
        scanf(" %c", &gender);  

        if (gender == 'M' || gender == 'm'){
            boys++;
        }
        else if (gender == 'F' || gender == 'f'){
            girls++;
        }
        else{
            printf("Invalid input. Please enter M or F.\n");
            }
    }

    printf("Total Boys: %d\n", boys);
    printf("Total Girls: %d\n", girls);
}