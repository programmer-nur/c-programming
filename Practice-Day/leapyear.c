#include<stdio.h>

int main(){
    int year ;

    scanf("%d ", &year);

    if(year % 4 == 0 && year % 100 != 0){
        printf("Leap");
    } else{
         printf("Not Leap");
    }
}