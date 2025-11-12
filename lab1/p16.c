#include <stdio.h>

int main() {
	float a,p,r,n;
	printf("write value of p,r,n:");
	scanf("%f %f %f",&p,&r,&n);
	a = p*r*n;
	printf("interest = %f",a/100);	
}