#include <stdio.h>
int main()   {
	
	int n,fact = 1;
	printf("write n :");
	scanf("%d",&n);

	for(int i=n ; i>=1 ; i--) {  
        fact = fact * i;
	}
    printf("%d",factorial);
}