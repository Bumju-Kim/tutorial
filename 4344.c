#include <stdio.h>

int main(){
    int testNum, num, score[1000], i, j, cnt;
    float avg;

    scanf("%d", &testNum);

    for(i=0; i<testNum; i++){
        scanf("%d", &num);

        avg = 0;
        cnt = 0;

        for(j=0; j<num; j++){
            scanf("%d", &score[j]);
            avg += score[j];
        }

        avg = avg / (float)num;

        for(j=0; j<num; j++){
            if(score[j] > avg)
                cnt++;
        }
        printf("%.3f%%\n", (float)cnt / (float)num * 100);
    }

    return 0;
}