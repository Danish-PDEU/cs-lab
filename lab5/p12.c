#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i;
    int a=0, e=0, i_cnt=0, o=0, u=0;

    printf("Enter a string :");
    scanf("%s",s);

    for(i = 0; s[i] != '\0'; i++) {
        switch (s[i])
        {
            case 'a': case 'A': a++; break;
            case 'e': case 'E': e++; break;
            case 'i': case 'I': i_cnt++; break;
            case 'o': case 'O': o++; break;
            case 'u': case 'U': u++; break;
        }
    }

    printf("Frequency of each vowel:\n");
    printf("A/a : %d\n", a);
    printf("E/e : %d\n", e);
    printf("I/i : %d\n", i_cnt);
    printf("O/o : %d\n", o);
    printf("U/u : %d\n", u);
}