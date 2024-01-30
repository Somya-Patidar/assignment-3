#include <stdio.h>
int main(){
    int x1,x2,x3,y1,y2,y3;
    printf("enter the point(x1,y1): ");
    scanf("%d%d",&x1,&y1);
    printf("enter the point(x2,y2): ");
    scanf("%d%d",&x2,&y2);
    printf("enter the point(x3,y3): ");
    scanf("%d%d",&x3,&y3);
    float m=(y2-y1)/(x2-x1);
    float n=(y3-y2)/(x3-x2);
    if(m==n){
        printf("all pt's lie on same line");
    }
    else{
        printf("do not lie on same line");
    }
    return 0;
}