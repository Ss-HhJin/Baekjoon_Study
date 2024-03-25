#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {
	int n, m, i, j, k, h, ball;
	int arr[100] = { 0 };
	scanf("%d %d", &n, &m); //바구니의 개수 / m번 공을 넣는다
	for (k = 0; k < m; k++) {
		scanf("%d %d %d", &i, &j, &ball);
		for (h = i - 1; h < j; h++) {
			arr[h] = ball;
		}
	}
	for (h = 0; h < n; h++) {
		printf("%d ", arr[h]);
	}
	return 0;
}