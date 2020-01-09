#include <stdio.h>// ㅗㅗㅗㅗㅗㅗㅗㅗㅗㅗㅗㅗㅗㅗㅗㅗㅗㅗ
#include <stdlib.h>
int main(void){
    int sugar,temp,five,three,count=0;
    scanf("%d",&sugar);
    while(1){
        temp=sugar;
        if(temp<20){
            temp=temp%10;
            count++;
        }
        if(sugar>10){
            break;
        }
    }
    ////////////////////////////////////////////
    if(temp==10){
        printf("%d",2+count*2);
    }
    if(temp==11){
        printf("%d",3+count*2);
    }
    if(temp==12){
        printf("%d",4+count*2);
    }
    if(temp==13){
        printf("%d",3+count*2);
    }
    if(temp==14){
        printf("%d",4+count*2);
    }
    if(temp==15){
        printf("%d",3+count*2);
    }
    if(temp==16){
        printf("%d",4+count*2);
    }
    if(temp==17){
        printf("%d",5+count*2);
    }
    if(temp==18){
        printf("%d",4+count*2);
    }
    if(temp==19){
        printf("%d",5+count*2);
    }
    return 0;
}