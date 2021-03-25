#define _CRT_SECURE_NO_WARINGS
/*자료형이 int 형이고 요소 개수가 5인 배열 */
#include <stdio.h>
// 요소와 인덱스
#define N 5 /* 배열의 요소의 개수 */

int main(void) {
	int i;
	int a[N];
	for (i = 0; i < N; i++) { /* 각 배열의 요소에 값을 입력*/
		printf("a[%d] : ", i);
		scanf("%d", &a[i]);
	}

	puts("각 요소의 값");
	for (i = 0; i < N; i++) { /* 각 요소의 값을 출력 */
		printf("a[%d] = %d\n", i, a[i]);
	}


	return 0;

}