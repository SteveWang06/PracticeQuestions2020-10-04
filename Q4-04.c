#include <stdio.h> 
#include <stdbool.h> 
  
int checkYear(int year) 
{ 
    if (year % 400 == 0){ 
        return true;
	}  
    if (year % 4 == 0 && year % 100 != 0){ 
        return true;
	}
 
    return false; 
} 
   
int main(int year) 
{ 
	printf("%s","請輸入你想查的年\n");
	scanf("%d", &year); 
  
    if(checkYear(year) == true){
        printf("%d 是閏年!", year); 
    }
	else if (year % 4 == 3){
        printf("%d 是平年!\n", year);
		printf("離 %d 最近的閏年是 %d 年", year, year + 1);
    }
	else if (year % 4 == 2){
        printf("%d 是平年!\n", year);
		printf("離 %d 最近的閏年是 %d 年", year, year + 2);
    }
	else if (year % 4 == 1){
        printf("%d 是平年!\n", year);
		printf("離 %d 最近的閏年是 %d 年", year, year + 3);
    }
	else{
		puts("輸入資料錯誤");
	}
    return 0; 
}
