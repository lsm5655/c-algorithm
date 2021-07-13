#include <stdio.h>
using namespace std;
// 최대 길이 증가수열 출력
int main() {
    freopen("input.txt", "rt", stdin);
    int n, i, pre, now, cnt, max;
    // n은 자연수의 개수, i는 반복문, pre와 now로 증가했는지 안했는지 판단
    // cnt는 증가수열의 길이, max는 최대증가수열 길이

    scanf("%d", &n); // n을 읽음
    scanf("%d", &pre); // 맨 처음 숫자를 pre로 지정
    cnt=1; // 길이 1로 초기화
    max=1; // max도 젤 작은 값인 1로 초기화
    for(i=2;i<=n;i++) {
        scanf("%d",&now); // 그다음 숫자를 now로 지정
        if(now>=pre) { // now가 pre보다 크면
            cnt++; // cnt 증가
            if(cnt > max) max = cnt; // cnt가 max보다 크면 max는 cnt
        }
        else cnt=1; // now가 pre보다 작으면, 증가를 안했으면 cnt 1로 초기화
        pre=now; // 지금 숫자를 pre로 변경, for문이 돌면서 다음 숫자가 now가 됨.
    }

    printf("%d", max); // max 값 출력
    return 0;

}