#include<stdio.h>

int main (){
    int x;
    scanf("%d", &x);
    int dig =x/1000;

    if(dig % 2 == 0){
        printf("EVEN\n");
    }else{
        printf("ODD\n");
    }
    return 0;
}