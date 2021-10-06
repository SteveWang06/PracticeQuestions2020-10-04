#include<stdio.h>

int main(void){
	int yes;
	int no;
	
	printf("%s"," 是否有房產? (0: No, 1: Yes) ");
	scanf("%d", &no);
	if (no == 0){
		printf("%s"," 是否已婚? (0: No, 1: Yes) ");
		scanf("%d", &no); 
		if(no == 0){
			printf("%s"," 是否年收入 > 100萬? (0: No, 1: Yes)) ");
			scanf("%d", &no);
			if(no == 0){
				puts("不能貸款"); 
			}
			else{
				puts(" 可以貸款 "); 
			}
		} 
		else{
			puts(" 可以貸款 "); 
		}					
	} 
	else{
		puts(" 可以貸款 ");
	} 
}