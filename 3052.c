#include <stdio.h>

int main(){
    int a[42]={0}, num, i, cnt=0;

    for(i=0; i<10; i++){
        scanf("%d", &num);
        a[num%42]++;
    }
    for(i=0; i<42; i++){
        if(a[i] != 0)
            cnt++;

    }
    printf("%d", cnt);
}