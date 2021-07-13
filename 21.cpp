#include <stdio.h>
using namespace std;
// 카드게임 설계
// 한게임당 이기면 3점, 비기면 1점 점수가 똑같으면 마지막에 승리한 사람이 승자
int main(void) {
    freopen("input.txt", "rt", stdin);
    int i, A[10], B[10], as=0, bs=0, lw=0;
    // i는 반복문, A와 B를 통해 카드 값을 받음, as와 bs는 a와 b의 점수, lw는 마지막에 이긴 사람
    for(i=0;i<10;i++) {
        scanf("%d", &A[i]); // A가 낸 카드 값
    }
    for(i=0;i<10;i++) {
        scanf("%d", &B[i]); // B가 낸 카드 값
    }

    for(i=0;i<10;i++){
        if(A[i]>B[i]) {
            as=as+3;
            lw=1;
        } // A가 이긴 경우, 승점 3점이고 마지막에 이긴사람 A라 함.
        else if(A[i]<B[i]) {
            bs=bs+3;
            lw=2;
        } // B가 이긴 경우, 승점 3점이고 마지막에 이긴사람 B라 함.
        else {
            as+=1;
            bs+=1;
        } // 비긴경우, 1점씩 추가
    }
    printf("%d %d\n", as, bs);
    if(as==bs) { // 비겼을때
        if(lw==0) printf("D\n"); // 마지막에 이긴사람이 없으면 무승부
        else if(lw==1) printf("A\n"); // 마지막에 이긴사람이 A면 A출력
        else printf("B\n"); // 마지막에 이긴사람이 B면 B출력
    } 
    else if(as>bs) printf("A\n"); // A 점수가 높으면 A 출력
    else if(as<bs) printf("B\n"); // B 점수가 높으면 B 출력
    return 0;
}