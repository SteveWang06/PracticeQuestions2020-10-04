#include<stdio.h>
#include<math.h>
int main(void){
    int x,y;
    printf("%s", "x = ");
    scanf("%d",&x);
    printf("%s", "y = ");
    scanf("%d",&y);
    if (sqrt(x*x+y*y) > 100){
        puts("outside");
    }
    else {
        puts("inside");
    }
}