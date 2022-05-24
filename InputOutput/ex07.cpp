#include <stdio.h>

int main() {

	// char : 1바이트 정수형
	// character : 문자
	char a = 65;

	printf("%d\n", a);
	printf("%c\n", a);
	printf("%c\n", 'A');

	int b;
	printf("숫자 입력 : ");
	scanf("%d", &b);
	printf("%d의 ASCII 문자 : %c\n", b, b);

	//ASCII : American Standart (문자-숫자)
}