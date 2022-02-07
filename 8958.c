#include <stdio.h>

int main(){
    int num, score, stack, i;
    char input;

    scanf("%d\n", &num);

    for(i=0; i<num; i++){
        stack = 0;
        score = 0;
        
        while(1){
            scanf("%c", &input);
            if(input == '\n')
                break;
            else if(input == 'O'){
                score++;
                score += stack;
                stack++;
            }
            else{
                stack = 0;
            }
        }
        printf("%d\n", score);
    }
    return 0;
}