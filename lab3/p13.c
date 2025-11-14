#include <stdio.h>
int main()   {
	int sum = 0;

	for(i=13 ;i<=100;i = i + 13)  {  
		sum = sum + i;
	}  
	printf("%d",sum);
}