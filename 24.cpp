#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
// jolly jumper
int main() {
    freopen("input.txt", "rt", stdin);
    int n, i, now, pre, pos; // 자연수의 개수 n, 반복문 i,
    // 현재 가리키는 수 now, now 전에 수 pre, now-pre 는 pos
    scanf("%d", &n);
    vector<int> ch(n); // 체크 되어있는지 아닌지를 구별하기 위한 배열
    scanf("%d", &pre);
    for(i=1; i<n; i++) {
        scanf("%d", &now); // 다음 값을 now로 읽음
        pos=abs(pre-now); // pos는 pre-now의 절대값
        if(pos>0 && pos<n && ch[pos] == 0) {
            // pos의 범위는 0보다 크고 n보다 작아야됨
            // 이미 체크가 되어있을수도 있으니 ch[pos]==0으로 확인
            ch[pos] = 1; // 3가지 조건을 충족하면 체크
        } else {
            printf("NO\n"); // 하나라도 틀리면 NO 출력
            return 0;
        }
        pre=now; // 현재 값을 pre로 지정함
    }

    printf("YES\n");
    return 0;

}