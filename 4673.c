#include <stdio.h>

int calcSelf(int a);

int main(){
    int i=1, self[10000] = {0}, res;

    while(i < 10000){
        res = calcSelf(i);
             
        if(res < 10000)
            self[res]++;
        i++;
    }

    for(i=1; i<10000; i++){
        if(self[i] == 0)
            printf("%d\n", i);
    }

    return 0;
}

int calcSelf(int a){
    int tmp, res;
    tmp = a;
    res = a;

    while(tmp/10 != 0){
        
        res += tmp % 10;
        tmp = tmp / 10;
    }
    res += tmp;
    return res;
}