#include <stdio.h>
#include <string.h>

struct student{
    int roll;
    char name[100];
    char course[100];
    char major[100];
    char inor[100];
};

void printAllNames(struct Student s[], int n) {
    printf("\nList of Students:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n",s[i].name);
    }
}

void printDataByRoll(struct Student s[], int n, int roll) {
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (s[i].roll == roll) {
            printf("\nStudent Details:\n");
            printf("Roll Number : %d\n", s[i].roll);
            printf("Name        : %s\n", s[i].name);
            printf("Course      : %s\n", s[i].course);
            printf("Major       : %s\n", s[i].major);
            printf("Minor       : %s\n", s[i].minor);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("\nNo student found with roll number %d\n", roll);
    }
}

int main() {
    struct Student s[10];
    int rollSearch;

    printf("Enter data for 10 students:\n");
    for (int i = 0; i < 10; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &s[i].roll);
        fflush(stdin);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Course Name: ");
        scanf("%s", s[i].course);

        printf("Major Subject: ");
        scanf("%s", s[i].major);

        printf("Minor Subject: ");
        scanf("%s", s[i].minor);
    }

    printAllNames(s, 10);

    printf("\nEnter roll number to search: ");
    scanf("%d", &rollSearch);

    printDataByRoll(s, 10, rollSearch);
}