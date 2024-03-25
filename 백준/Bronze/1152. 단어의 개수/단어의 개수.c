#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>//일반적으로 %s 만으로는 입력 공백을 출력할 수 없음 
#include <string.h>
int main(void) {
	char word[1000000] = "";
	int i, count = 0;
	scanf("%[^\n]s", word); // [^\n] 사용하면 공백까지 포함해 입력으로 받기 가능
	for (i = 0; word[i] != '\0'; i++) {
		if (word[i] == ' ') {
			count++;
		}
	}

	if (word[(int)strlen(word) - 1] == ' ')
		count--;
	if (word[0] == ' ')
		count--;

	printf("%d\n", count + 1); 
	return 0;
}
