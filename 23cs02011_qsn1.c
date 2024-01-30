#include <stdio.h>
int main(){
    printf("enter any integer: ");
    int a;
    scanf("%d",&a);
    if (a>0)
    {
        printf("entered number is positive");
    }
    else if (a<0)       
    {
        printf("entered number is negative");
    }
    else{
        printf("entered no is zero");
    }
    
    
}