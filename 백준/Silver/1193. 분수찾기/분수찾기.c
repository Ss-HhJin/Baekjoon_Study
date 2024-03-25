#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int i = 1, X, count = 1, fir = 1 , sec = 1;
	scanf("%d", &X);
	for (i = 1; i < X; i++) {
		X = X - i;
		count++;
	}
	if (count % 2 == 1) {
		fir = 1; sec = count;
		for (i = count; i > 0; i--) {
			if (X == i)
				printf("%d/%d",fir, sec);
			fir++; sec--;
		}
	}
	else {
		fir = count; sec = 1;
		for (i = count; i > 0; i--) {
			if (X == i)
				printf("%d/%d", fir, sec);
			fir--; sec++;
		}
	}
	return 0;
}