#include <stdio.h>
using namespace std;
// 최대 연속으로 경보음이 울린 시간을 구하세요.
// 첫줄에 자연수 N과 val이 주어집니다.
// 두 번째 줄에 N개의 측정값이 초 순서대로 입력된다.
int main(void)
{
    freopen("input.txt", "rt", stdin);
    
    int n, a, val, i, cnt=0, max=-2147000000;
    // n은 몇개 입력 받을건지, a의 값이 val의 값을 넘으면 cnt++, cnt 최대값이 max
    // i는 반복문
    scanf("%d %d", &n, &val);
    for(i=1; i<=n; i++) {
        scanf("%d", &a); // a값을 n번째 까지 읽어줌
        if(a>val) cnt++; // a값이 val의 값을 넘으면 cnt++
        else cnt = 0; // 아니면 cnt=0으로 초기화
        if(cnt>max) max = cnt; // cnt가 max보다 크면 max = cnt

    }
    if(max==0) printf("-1\n"); // max가 0인 것은 a값이 val값을 넘은 값이 없다는것 따라서 -1 출력
    else printf("%d\n", max); // else면 max값 출력
    return 0;
}
