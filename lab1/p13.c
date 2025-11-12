#include <stdio.h>

int main() {
int byte,kb,mb,gb;
printf("Enter Bytes :");
scanf("%d",&byte);
kb = byte*1028;
mb = kb*1028;
gb = mb*1028;
printf("kb = %d, mb = %d, gb = %d",kb,mb,gb);
}