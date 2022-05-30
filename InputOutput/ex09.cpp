#include <stdio.h>

int main() {
	//비교 연산자
	int a, b;
	scanf("%d%d", &a, &b);
	int p = a > b;
	int q = a < b;
	int r = a == b; 

	//논리 연산자
	bool p = a >= 1 && a<=10;
	bool q = a == 3 || a == 7;
	bool r = !q;

}