#include <stdio.h>
#include <stdlib.h>
int main(void){
	int sugar,five,three,temp;
	scanf("%d",&sugar);
    //예외
    if(sugar==1||sugar==4){
        printf("-1");
        exit(0);
    }
    temp=sugar;//temp===sugar
	five=sugar/5;//5로 나누고
	temp%=5;
	three=temp/3;//남은걸 3으로 나누고
	temp%=3;
	while(temp){//남은만큼 반복
		five--;//5하나를 빼고
		temp+=5;//temp에 5 더해두고
		three+=temp/3;//다시3으로 나눠보기
		temp%=3;//남은값 다시 올리고
        if (five<=0){//0보다 작아지면 탈출
            break;
        }
	}
	if (temp!=0){//이도저도아니면 -1
        printf("-1");
    }
	else{//출력
        printf("%d",five+three);
    }
	return 0;
}