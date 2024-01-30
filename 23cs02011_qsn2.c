#include <stdio.h>
int main(){
    int a,b,c;
    printf("enter numbers a:");
    scanf("%d",&a);
    printf("\nenter number b:");
    scanf("%d",&b);
    printf("\nenter numbers c:");
    scanf("%d",&c);
   
    if(a>b){
        if(a>c){
            printf("a is largest");
        }
        else{
            printf("c is largest");
        }
    }
    else{
        if(b>c){
            printf("b is largest");
        }
        else{
            printf("c is largest");
        }
    }
    return 0;
}