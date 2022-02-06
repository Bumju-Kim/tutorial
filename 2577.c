#include <stdio.h>

int main(){
    int a[10]={0}, x, y, z, product, i;

    scanf("%d %d %d", &x, &y, &z);
    
    product = x*y*z;
    while(product != 0){
        a[product%10]++;
        product = product / 10;
    }
    for(i=0; i<10; i++){
        printf("%d\n", a[i]);
    }
}