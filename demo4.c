#include<stdio.h>
#include<stdlib.h>
int main(void){
    int Year;
    scanf("%d",&Year);
    if(Year%4==0 &&Year%100!=0)
    {
        printf("%s\n","閏年");
    }
        else{
            if(Year%400==0){
                printf("%s\n","閏年");
            }else{
                printf("平年");
                printf("離%d最近的閏年是%d年年%d年\n",Year,Year+4,Year-4);
                
            }if(Year%4==1){
                printf("平年");
                printf("離%d最近的閏年是%d年\n",Year,Year-1);
            }else if (Year%4==3){
                printf("平年");
                printf("離%d最近的閏年是%d年\n",Year,Year+1);
            }else if (Year%4==2){
                printf("平年");
                printf("離%d最近的閏年是%d年\n",Year,Year+2,Year-2);
            }
}
}