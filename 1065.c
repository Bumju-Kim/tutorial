#include <stdio.h>

int isHS(int i);

int main(){
    int num, i, cnt;

    scanf("%d", &num);

    cnt = 0;
    for(i=1; i<=num; i++){
        if(isHS(i) == 1){
            cnt++;
        }

    }
    printf("%d", cnt);

    return 0;
}

int isHS(int i){
    int tmp, a, b, check=0, diff[4], k=0, cnt=0, j;
    
    if(i<100)
        return 1;
    else{
        tmp = i;
        while(1){
            if(tmp < 10)
                break;
            else{
                a = tmp%10;
                b = tmp/10%10;
                diff[k] = a - b;
                k++;
                
                tmp = tmp / 10;
            }
        }
        
        for(j=0; j<k; j++){
            if(diff[j] == diff[j+1])
                cnt++;
        }


        if(cnt == k-1)
            return 1;
        return 0;
    }
}