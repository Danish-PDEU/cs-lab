#include <stdio.h>
int main() {
	int a,b,c;
	printf("Enter two numbers :");
	scanf("%d %d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("a = %d and b = %d", a, b);
}   