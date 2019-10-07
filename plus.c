#include <stdio.h>

int plus(int num1, num2);

int main() {
	int a,b;
	scanf("%d %d", &a, &b);
	printf("%d", plus(a,b));

	return 0;
}

int plus(int num1, int num2) {
	return num1 + num2;
}
