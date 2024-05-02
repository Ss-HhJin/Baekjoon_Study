#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main(void) {// 가우스 소거법 이용

	int a, b, c, d, e, f;
	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

	int det, x, y;
	det = a * e - b * d;
	x = (e * c - b * f) / det;
	y = (a * f - d * c) / det;

	printf("%d %d", x, y);
	return 0;
}