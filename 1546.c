#include <stdio.h>

int main(){
    int a[1000]={0}, num, i, max=-1;
    float b[1000], avg;
    scanf("%d", &num);

    for(i=0; i<num; i++){
        scanf("%d", &a[i]);
        if(a[i] > max)
            max = a[i];
    }
    for(i=0; i<num; i++){
        b[i] = (float)a[i]/(float)max*100.0f;
        avg += b[i];
    }
    avg = avg/(float)num;
    printf("%.6f", avg);
}