#include <stdio.h>

int main() {
	int num,temp,dig,sum = 0;
	printf("Enter a number :");
	scanf("%d",&num);
    temp = num;

	while(temp != 0)  {
	dig = temp % 10;
    sum = sum + dig*dig*dig; 
	temp = temp/10;
	}
    if(sum == num) {
        printf("The number is armstrong.");
    }
    else {
        printf("The number is not armstrong.");
    }
}