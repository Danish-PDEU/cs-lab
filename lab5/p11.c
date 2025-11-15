#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Enter a String :");
    scanf("%s",s);

    char srev[100] = strrev(s);
    for(int i = 0; i < strlen(s); i++) {
        printf("%c\n", srev[i]);
    }
}