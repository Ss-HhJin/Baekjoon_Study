#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {
	int arr[10000] = { 0 };
	int i, n, x;

	scanf("%d %d", &n, &x);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < n; i++) {
		if (arr[i] < x) {
			printf("%d ", arr[i]);
		}
	}

	return 0;
}