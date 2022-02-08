#include <stdio.h>
#include <string.h>

int main(){
    char c[100];
    int a[26]={0}, i;

    scanf("%s", c);

    for(i=0; i<strlen(c); i++){
        if(a[c[i]-'a'] != 0)
            continue;
        else{
            a[c[i]-'a'] = i+1;  // 원래는 그대로 저장하려 했으나 아래 삼항연산자에서 0값이 거짓으로 판별돼서 바꿈
        }
    }

    for(i=0; i<26; i++){
        printf("%d ", a[i]? a[i]-1 : -1);
    }

    
    return 0;
}