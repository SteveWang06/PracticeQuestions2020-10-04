#include<stdio.h>
#include<math.h>
int main(void){
   int a,b,c;
   printf("請輸入三角形的三邊長！\n");
   printf("%s","a = ");
   scanf("%d", &a);
   printf("%s","b = ");
   scanf("%d", &b);
   printf("%s","c = ");
   scanf("%d", &c);
   if( a<=b && b<=c && a+b>c && a+c>b && b+c>a ){
       printf("%d %d %d 是三角形的三邊長", a,b,c);
   }
   else{
       printf("%d %d %d 不是三角形的三邊長", a,b,c);
   }
}