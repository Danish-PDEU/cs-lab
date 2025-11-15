#include <stdio.h>

struct student_data {
    int roll;
    char name[50];
    float phy, math, chem;
    float total;
};

int main() {
    struct student_data s;

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);

    fflush(stdin);

    printf("Enter Name: ");
    gets(s.name);

    printf("Enter Physics Marks: ");
    scanf("%f", &s.phy);

    printf("Enter Maths Marks: ");
    scanf("%f", &s.math);

    printf("Enter Chemistry Marks: ");
    scanf("%f", &s.chem);

    s.total = s.phy + s.math + s.chem;

    printf("\n--- Student Details ---\n");
    printf("Roll Number : %d\n", s.roll);
    printf("Name        : %s\n", s.name);
    printf("Physics     : %.2f\n", s.phy);
    printf("Maths       : %.2f\n", s.math);
    printf("Chemistry   : %.2f\n", s.chem);
    printf("Total Marks : %.2f\n", s.total);
}