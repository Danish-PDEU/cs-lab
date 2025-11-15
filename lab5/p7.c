#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Enter a String :");
    scanf("%s",s);

    printf("reverse of string is %d", strrev(s));
}