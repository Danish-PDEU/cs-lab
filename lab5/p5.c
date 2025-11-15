#include <stdio.h>
#include <ctype.h>

int main() {
    char str1[100], str2[100];

    printf("Enter a string: ");
    gets(str1);

    strcpy(str1,str2);

    printf("Copied string : %s", str2);
}