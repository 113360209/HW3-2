#include <stdio.h>
#include <stdlib.h>

unsigned long long fibonacci(unsigned int n) {
	if (n == 0) return 0;
	if (n == 1) return 1;
	unsigned long long a = 0, b = 1, temp;
	for (unsigned int i = 2; i <= n; i++) {
		temp = a + b;
		a = b;
		b = temp;
	}
	return b;
}

int main() {
	unsigned int n = 50;
	printf("Fibonacci(%u) = %11u\n", n, fibonacci(n));
	unsigned int maxIndex = 1;
	unsigned long long currentFibo = 1;
	while (currentFibo > 0) {
		maxIndex++;
		currentFibo = fibonacci(maxIndex);
	}
	printf("The largest Fibonacci index that can be displayed: %u\n", maxIndex - 1);
	return 0;
}
