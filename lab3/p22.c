#include <stdio.h>

int main() {
	int num,dig=0;
	printf("Enter a number :");
	scanf("%d",&num);

	while(num != 0)  {
	dig++;
	num = num/10;
	}
    printf("%d",dig);
}