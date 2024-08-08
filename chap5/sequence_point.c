//
// Created by lisen on 24-8-8.
//
#include <stdio.h>

int main() {
	int x = 10;
	int y = (4 * x++) + (6 * x++);

	printf("x = %d, y = %d\n", x, y);

	return 0;
}
