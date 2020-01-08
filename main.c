#include <stdio.h>////11말고 작동
int main(void) {
    int sugar,five,temp;
    scanf("%d",&sugar);//sugar스캔 후
    temp=sugar;
    five=sugar/5;//5키로로 나누고
    temp=sugar%5;//5로 안나눠지면
    if(sugar%5==0){//5로 나눠지는 가장 깔끔한 경우
        printf("%d",five);
    }
    else{//더럽고 추잡한 경우...
        if(temp%3==0){
            printf("%d",five+temp/3);
        }
        else{//진짜 더럽고 추잡한경우
            if((sugar-5)%3==0){
                printf("%d",five-1+temp/3);
            }
            else{
                printf("-1");
            }
        }
    }
    return 0;
}