#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    double c;
    c = (double)a / (double)b;
    printf("%.11lf", c);
    
    return 0;
}