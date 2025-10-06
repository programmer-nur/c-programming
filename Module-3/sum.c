#include<stdio.h>

int main (){
    int sum=0,i,user_input;
    scanf("%d", &user_input);
    for(i=1; i <= user_input; i++){
        sum += i;

    }
    printf("Total Sum:%d", sum);
    return 0;
}