#include<stdio.h>


int main(void){
    int age,look,salary,civilServants;
    printf("%s","年齡 : ");
    scanf("%d",&age);
    if (age<=30)
    {
        printf("%s","長相 （0：醜，1：帥，2：中等）： ");
        scanf("%d",&look);
        if (look == 1 || look == 2)
        {
            printf("%s","收入 （0：低，1：中，2：高）： ");
            scanf("%d",&salary);
            if (salary==1)
            {
                printf("%s","公務員 （0：不是，1：是）： ");
                scanf("%d",&civilServants);
                if (civilServants==1)
                {
                    puts("見");
                }
                else if (civilServants==0)
                {
                    puts("不見");
                }
                else
                {
                    puts("輸入錯誤");
                }
                
                
            }
            else if (salary==2)
            {
                puts("見");
            }
            else{
                puts("輸入錯誤");
            }
            
        }
        else if(look==0){
            puts("不見");
        }
        else{
            puts("輸入錯誤");
        }

    }
    else if (age>30)
    {
        puts("不見");
    }
    
    else{
       puts("輸入錯誤");
    }

}