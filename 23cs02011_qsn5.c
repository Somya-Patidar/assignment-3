#include <stdio.h>
int main(){
    int a;
    printf("no of days delayed:");
    scanf("%d",&a);
    if(a<=5){
        printf("the fine is 1 rupee");
    }
    else if(a>=6 && a<=10){
        printf("the fine is 2 rupee");
    }
    else if(a>10 && a<=30){
        printf("the fine is 5 rupee");
    }
    else{
        printf("your membership is cancelled");
    }
}