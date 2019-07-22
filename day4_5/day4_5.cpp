#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int CNT = 10;

int main(void)
{
	int numbers[CNT];
	int i, numIndex[CNT], mid;
	int low, high;

	srand(time(NULL));

	for (i = 0; i < CNT; i++) {
		numIndex[i] = i;
		numbers[i] = rand() % 10;
	}

	low = numbers[numIndex[0]];
	high = numbers[numIndex[CNT]];

	while(high >= low) {
		mid = (num
	}

	
}