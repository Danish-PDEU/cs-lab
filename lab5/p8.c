#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Enter a String :");
    scanf("%s",s);

    if(s == strrev(s)) {
        printf("%s is palindrome.",s);
    }
    else {
        printf("%s is not palindrome.",s); 
    }
}