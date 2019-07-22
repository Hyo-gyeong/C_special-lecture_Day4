#include <stdio.h>//************************************day4_3
#include <stdlib.h>
#include <time.h>

const int CNT = 10;//const는 c++에서만 작동

int main(void) 
{//배열 랜덤으로 섞기********최솟값의 위치 중요
	int arr[CNT];
	int i, j;
	int small, minIndex, temp;

	srand(time(NULL));

	printf("원래 배열: ");

	for (i = 0; i < CNT; i++) {
		arr[i] = rand() % 100;//배열 랜덤으로 생성
		printf("%4d", arr[i]);
	}

	printf("\n작은 수대로 나열: ");

	for (j = 0; j < CNT; j++) {
		small = arr[j];//
		minIndex = j;//if문이 실행이 되지 않는 경우 minIndex가 이전값으로 남아버리기 때문에 index값도 첫 번째 index라고 정해줘야 함...!
		for (i = j+1; i < CNT; i++) {
			if (small >= arr[i]) {
				small = arr[i];
				minIndex = i;
			}
		}
		temp = arr[j];
		arr[j] = arr[minIndex];//이 코드가 arr[j] = small로 두는 것보다 알아보기 쉬움..!!
		arr[minIndex] = temp;
		printf("\n%4d", arr[j]);
	}
}