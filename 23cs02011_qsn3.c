#include <stdio.h>
int main(){
    int a,b,c;
    printf("enter three sides :");
    scanf("%d%d%d",&a,&b,&c);
    if(((a+b)>c)||((a+c)>b)||((b+c)>a)){
        printf("Are sides of a triangle");
    }
    else{
        printf("not the sides of triangle");
    }
    return 0;
}