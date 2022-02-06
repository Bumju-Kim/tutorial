#include <stdio.h>

int main(){
    int num, a, b, max=-1000001, min=1000001, i;
    scanf("%d", &num);
    
    for(i=0; i<num; i++){
        scanf("%d", &a);
        if(a > max)
            max = a;
        if(a < min)
            min = a;
    }
    printf("%d %d", min, max);
    return 0;
}