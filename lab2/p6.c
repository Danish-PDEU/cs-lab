#include<stdio.h>

int main() {
    int phy, chem, maths;
    printf("Enter Physics marks : ");
    scanf("%d", &phy);

    printf("Enter Chemistry marks : ");
    scanf("%d", &chem);

    printf("Enter Maths marks : ");
    scanf("%d", &maths);

    float avg = (phy+chem+maths)/3;

    if(avg >= 70) {
        printf("distinction");
    }

     else if(avg >= 60) {
        printf("First Class");
    }

    else if(avg >= 50) {
        printf("Second Class");
    }

    else if(avg >= 35) {
        printf("Third Class");
    }

    else {
        printf("FAIL!!");
    }

}