#include <stdio.h>//************************************day4_3
#include <stdlib.h>
#include <time.h>

const int CNT = 10;//const�� c++������ �۵�

int main(void) 
{//�迭 �������� ����********�ּڰ��� ��ġ �߿�
	int arr[CNT];
	int i, j;
	int small, minIndex, temp;

	srand(time(NULL));

	printf("���� �迭: ");

	for (i = 0; i < CNT; i++) {
		arr[i] = rand() % 100;//�迭 �������� ����
		printf("%4d", arr[i]);
	}

	printf("\n���� ����� ����: ");

	for (j = 0; j < CNT; j++) {
		small = arr[j];//
		minIndex = j;//if���� ������ ���� �ʴ� ��� minIndex�� ���������� ���ƹ����� ������ index���� ù ��° index��� ������� ��...!
		for (i = j+1; i < CNT; i++) {
			if (small >= arr[i]) {
				small = arr[i];
				minIndex = i;
			}
		}
		temp = arr[j];
		arr[j] = arr[minIndex];//�� �ڵ尡 arr[j] = small�� �δ� �ͺ��� �˾ƺ��� ����..!!
		arr[minIndex] = temp;
		printf("\n%4d", arr[j]);
	}
}