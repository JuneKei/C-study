#include <stdio.h>

int main() {
	//�� ������
	int a, b;
	scanf("%d%d", &a, &b);
	int p = a > b;
	int q = a < b;
	int r = a == b; 

	//�� ������
	bool p = a >= 1 && a<=10;
	bool q = a == 3 || a == 7;
	bool r = !q;

}