#include <stdio.h>
using namespace std;
// 석차 구하기
int main() {
    freopen("input.txt", "rt", stdin);
    int i, j, a[200], b[200], n;
    // a배열에는 점수 입력, b배열에는 석차 입력
    scanf("%d", &n);
    for(i=1; i<=n;i++) { // 1부터 n까지 반복
        scanf("%d", &a[i]); // a배열에 점수 입력
        b[i]=1; // b배열은 모든 값 1로 입력
    }

    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(a[j]>a[i]) b[i]++; // a[i]는 등수를 구하려는 대상
            // a[j]는 나머지 대상 따라서 a[i]보다 큰 숫자가 있으면
            // 등수가 1 증가됨.
        }
    }
    for(i=1;i<=n;i++){
        printf("%d ", b[i]); // 등수 출력
    }

    return 0;

}