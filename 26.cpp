#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
// 최선의 등수 구하기
int main() {
    freopen("input.txt","rt",stdin);
    int i, j, n, cnt=0; // cnt는 최선의 등수
    scanf("%d", &n);
    vector<int> a(n+1); // 1부터 배열이 시작함
    for(i=1; i<=n; i++) {
        scanf("%d", &a[i]); // a배열의 실력 입력
    }
    printf("1 ");
    for(i=2; i<=n; i++) {
        cnt = 0; // 선수 바뀔때마다 cnt = 0
        for(j=i-1; j>=1; j--) { // j는 앞 사람들을 비교하는거 따라서 i의 앞인 i-1 부터 첫번째 선수인 1 까지 반복
            if(a[j]>=a[i]) cnt++; // 나보다 실력이 좋은사람이 앞에 있으면 등수 1 증가시킴
        }
        printf("%d ", cnt+1); // cnt 0으로 초기화했기 때문에 +1시킴
    }

    return 0;
}