#include <stdio.h>

int main(){
    int num, sum=0, i;
    char tmp;
    
    scanf("%d", &num);
    getchar();
    for(i=0; i<num; i++){
        scanf("%c", &tmp);
        //printf("tmp: %d, ", tmp);
        sum += (int)tmp-'0';
    }

    printf("%d", sum);

    return 0;
}