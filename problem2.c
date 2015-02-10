#include <stdio.h>
#include <math.h>

int main() {
	int sum = 0;
	int x = 1;
	int y = 2;
	int z = 0;
	while (x<4000000 && y<4000000 && z<4000000) {
		sum = sum + y;
		z = x + y;
		x = y + z;
		y = x + z;
	}
	printf("%i\n", sum);
}