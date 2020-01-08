#include <stdio.h>////3빼기
#include <stdlib.h>
int main(void) {
    int sugar=0,five=0,three,temp;
    scanf("%d",&sugar);//sugar스캔 후
    if(sugar%5==0){
        five=sugar/5;
    }
    else if(sugar%3==0){
        three=sugar/3;
        }
        for(int i=1;i<10;i++){
            if((sugar-3*i)%5==0){
                three=i;
                five=(sugar-3*i)/5;
                break;
            }
        }
        if(three!=0&&five!=0){
            printf("%d",five+three);
            exit(0);
        }
    else if(three==0&&five==0){
        printf("-1");
    }
    if(three<five){
        printf("%d",three);
    }
    else{
        printf("%d",five);
    }
    return 0;
}