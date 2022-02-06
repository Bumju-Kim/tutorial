#include <stdio.h>

int main(){
    int a[9], max=-1, i, loc;

    for(i=0; i<9; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<9; i++){
        if(a[i] > max){
            max = a[i];
            loc = i;
        }
    }
    printf("%d\n%d", max, loc+1);
}