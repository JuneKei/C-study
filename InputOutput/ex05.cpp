#include <stdio.h>

int main() {

	//sizeof(x) : x의 크기
	printf("%d %d %d %d", sizeof(int), sizeof(char), sizeof(float), sizeof(double));

	double avg = 100 / 3;
	double avg2 = (double)100 / 3;
	/*
	정수 / 정수 = 정수
	실수 / 정수 = 실수
	실수 / 실수 = 실수

	정수 + 정수 = 정수
	정수 + 실수 = 실수
	실수 + 실수 = 실수
	*/
}
