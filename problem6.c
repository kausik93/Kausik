#include <stdio.h>
#include <math.h>

int main() {
	int x = 1;
	int square;
	int total1 = 0;
	int sum = 0;
	int total2 = 0;
	int diff;
	for(x=1; x<101; x++) {
		square = x*x;
		total1 += square;
	}

	for(x=1; x<101; x++)
		sum = sum + x;

	total2 = sum*sum;
	diff = total2 - total1;
	printf("%i\n", diff);

}