#include <stdio.h>
using namespace std;
// 뒷사람 모두의 시야를 가리는 분노유발자의 수를 구하시오.
// 첫줄에 한줄에 앉은 학생수 n이 주어집니다.
// 두번째 줄에 n명의 앉은 키 정보가 앞자리 학생부터 차례대로 주어집니다.
int main(void) {
    freopen("input.txt", "rt", stdin);
    int n, i, cnt=0, max; // 학생수 n, 반복문 i, 분노유발자 수 cnt, max가 바뀔때 마다 cnt 증가
    int a[101]; // 배열 a 선언
    scanf("%d", &n); // n의 값을 읽어줌

    for(i=1; i<=n; i++) {
        scanf("%d", &a[i]);
    } // 배열 a의 학생 앉은키 정보를 넣어줌.
    max = a[n]; // 앉은키가 큰 사람을 max라 하고 뒷자리에서 부터 비교함
    for(i=n-1; i>=1; i--) {
        if(a[i]>max) {
            max = a[i];
            cnt++;
        } // 뒷자리보다 앉은키가 크면 max의 값이 바뀜 그리고 cnt++
    }
    printf("%d\n", cnt); // cnt 출력

    return 0;
}