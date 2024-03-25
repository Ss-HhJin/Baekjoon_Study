#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {
	int arr[100] = { 0 };
	int i, n, key, count = 0;

	scanf("%d", &n); //정수의 개수 입력
	
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	scanf("%d", &key);

	for (i = 0; i < n; i++) {
		if (key == arr[i])
			count++;
		else
			count += 0;
	}

	printf("%d", count);
	return 0;
}