#include <stdio.h> 

int main() {
	printf("%d",1);
	// %d : 정수 출력
	
	printf("%f",0.1);
	// %f : 실수 출력 

	printf("%.2f", 0.1111);
	// %f : 실수 출력 ( 소수점 둘째자리까지만 반올림해서 출력 )

	printf("%g", 1);
	// %g : 실수 출력 ( 지수 형태로도 출력 )
	
	printf("%c", 'a');
	// %c : 문자 출력 ( ASCII 코드 숫자도 출력 가능 )

	printf("%s", "abcde");
	// %s : 문자열 출력

}