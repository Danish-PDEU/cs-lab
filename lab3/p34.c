//FIBONACI SERIES 
#include <stdio.h>
int main()   {
	int num,first=0,second=1,next;
	printf("enter no. of terms of series :");
	scanf("%d",&num);

	for(int i=0 ; i < num ; i++){
	printf("%d",first);
	next= first+second;
	first=second;
	second=next; 
	}	
}