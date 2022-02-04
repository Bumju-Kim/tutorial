#include <stdio.h>

int main(){
    int a, b, c1, c2, c3;
    scanf("%d %d", &a, &b);
    c1 = b/100;
    c2 = b%100/10;
    c3 = b%10;

    printf("%d\n%d\n%d\n%d", a*c3, a*c2, a*c1, a*b);

    return 0;
}