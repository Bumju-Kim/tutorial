#include <stdio.h>

int main(){
    int num;
    int a, b, c=190, cnt=0;
    
    scanf("%d", &num);
    
    
    while(1){
        if(c == num)
            break;
        else if(c == 190)
            c = num;
        cnt++;
        a = c % 10;
        b = c / 10;
        
        c = (c%10)*10 + (a+b)%10;
 //       printf("%d %d %d\n", a, b, c);
    }
    printf("%d", cnt);
    
    return 0;
}