#include <stdio.h>
using namespace std;
// 가위바위보 설계
// 1이 가위, 2가 바위, 3이 보 이기는사람의 문자 출력, 비기면 D 출력
int main(void) {
    freopen("input.txt", "rt", stdin);
    int n, i, a[101], b[101]; // 가위바위보 횟수 n, 반복문 i, a가 낸거, b가 낸거
    scanf("%d", &n);

    for(i=1; i<=n; i++) {
        scanf("%d", &a[i]);
    } // 반복문으로 a가 낸 가위바위보 입력
    for(i=1;i<=n;i++) {
        scanf("%d", &b[i]);
    } // 반복문으로 b가 낸 가위바위보 입력
    for(i=1; i<=n; i++) {
        if(a[i] == b[i]) printf("D"); // 비기면 D 출력
        else if(a[i]==1&&b[i]==3) printf("A\n"); // a가 가위를 내고 이긴경우
        else if(a[i]==2&&b[i]==1) printf("A\n"); // a가 바위를 내고 이긴경우
        else if(a[i]==3&&b[i]==2) printf("A\n"); // a가 보를 내고 이긴경우
        else printf("B\n"); // 나머지는 b가 이긴경우
    }

    return 0;
}