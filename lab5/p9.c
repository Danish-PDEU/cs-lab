#include <stdio.h>
#include <string.h>

int main() {
    char s1[3] = "abc";
    char s2[3] = "xyz";
    strcat(s1,s2);

    printf("%s",s1);
}