#include <stdio.h>

int main() {
	int num,dig;
	printf("Enter a number :");
	scanf("%d",&num);

	while(num != 0)  {
	dig = num % 10;
	printf("%d",dig);
	num = num/10;
	}
} 