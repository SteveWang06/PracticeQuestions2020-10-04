#include<stdio.h>
int main(void){
    int month,day;
    printf("%s","請輸入出生月：");
    scanf("%d",&month);
    printf("%s","請輸入出生日：");
    scanf("%d",&day);
    
    if (month==1 && day>=21 || month==2 && day<=18){
        puts("aquarius");
    }
    else if (month==2 && day>=19 || month==3 && day<=20){
        puts("pisces");
    }
    else if (month==3 && day>=21 || month==4 && day<=20){
        puts("aries");
    }
    else if (month==4 && day>=21 || month==5 && day<=21){
        puts("taurus");
    }
    else if (month==5 && day>=22 || month==6 && day<=21){
        puts("gemini");
    }
    else if (month==6 && day>=22 || month==7 && day<=22){
        puts("canser");
    }
    else if (month==7 && day>=23 || month==8 && day<=23){
        puts("leo");
    }
    else if (month==8 && day>=24 || month==9 && day<=23){
        puts("virgo");
    }
    else if (month==9 && day>=24 || month==10 && day<=23){
        puts("libra");
    }
    else if (month==10 && day>=24 || month==11 && day<=22){
        puts("scorpio");
    }
    else if (month==11 && day>=23 || month==12 && day<=21){
        puts("sagittarius");
    }
    else if (month==12 && day>=22 || month==1 && day<=20){
        puts("capricorn");
    }
    else{
        puts("輸入錯誤");
    }

}