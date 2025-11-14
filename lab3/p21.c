//21.	Separate digs of a given no. e.g. 351�1,5,3
#include <stdio.h>

int main() {
	int num,dig;
	printf("Enter a number :");
	scanf("%d",&num);

	while(num != 0)  {
	dig = num % 10;
	printf("%d\t",dig);
	num = num/10;
	}
}
	
	
	
	
	
	
	
