#include <stdio.h>
int main()   {
	int rev=0,temp,r,num;
	printf("enter a number:");
	scanf("%d",&temp);
	num = temp;

	while (temp!=0)  {
		r = temp%10;
		rev = rev*10 + r;
		temp = temp/10;  
    }
    	
	if (num == rev){
		printf("yes its p");
    }
    else{
        printf("nope");
    }			
}