#include <stdio.h>//**********************************day4_1,2
#include <stdlib.h>
#include <time.h>

const int CNT = 10;//�����ͼ��� �þ�� ���� ��ĥ �� ����

int main(void)
{//�ִ�, ����
	int arr[10];
	int i = 0, biggest, smallest;
	int temp,last,hold;
	
	srand(time(NULL));

	arr[0] = rand() % 100;//���� = �Է� = �и�

	biggest = arr[0];
	smallest = arr[0];

	do {
		i++;

		arr[i] = rand() % 100;//���� = �Է� = �и�
				
		if (biggest <= arr[i])
			biggest = arr[i];

		if (smallest >= arr[i])
			smallest = arr[i];

	}while(i < CNT-1);

	printf("�ִ���: %d\n", biggest);
	printf("�ּڰ���: %d\n", smallest);

	printf("�迭 ���: ");
	for (i = 0; i < CNT; i ++) {
		printf("%4d", arr[i]);
	}

	;

	printf("\n�迭 ���� ���: ");
	for (i = CNT - 1; i >= 0; i--) {
		printf("%4d", arr[i]);
	}
	printf("\n");

	printf("�迭 �������� �� ĭ �̵�: ");
	
	temp = arr[0];
	for (i = 0; i < CNT - 1; i++)
		arr[i] = arr[i+1];
	arr[CNT-1] = temp;
	
	for (i = 0; i < CNT;i++) {
		printf("%4d", arr[i]);
	}
	printf("\n");

	//printf("�迭 ���������� �� ĭ �̵�: ");
	//
	//for (i = 1; i < CNT - 2; i++) {
	//	//arr[i] = arr[i-1];//��������� ���� ���·� �������� ���ϱ� ��� ���� ���� �ݺ� ��. IDEA!8��° �迭���� �������� ���´ٰ� �����غ��°͵� ���~
	//	temp = arr[i+1];
	//	arr[i+1] = arr[i];
	//	arr[i+2] = temp;
	//}
	//
	/*for (i = 0; i < CNT;i++) {
		printf("%4d", arr[i]);
	}
	printf("\n");*/
}
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//const int CNT = 10;//�����ͼ��� �þ�� ���� ��ĥ �� ����
//
//int main(void)
//{//�ִ�, ����
//	int arr[10];
//	int i = 0, biggest, smallest;
//	int temp;
//	
//	srand(time(NULL));
//
//
//	do {
//		arr[i] = rand() % 100;
//
//		biggest = arr[0];
//		smallest = arr[0];
//				
//		if (biggest <= arr[i])  �̷��� �ϸ� ó���� ���� ��� ���ϰ� �Ǽ� ������ ó���� ���� ��µ�....!!*******************************
//			biggest = arr[i];
//
//		if (smallest >= arr[i])
//			smallest = arr[i];
//
//		i++;
//
//	}while(i < CNT);
//
//	printf("�ִ���: %d\n", biggest);
//	printf("�ּڰ���: %d\n", smallest);
//
//	printf("�迭 ���: ");
//	for (i = 0; i < CNT; i ++) {
//		printf("%4d", arr[i]);
//	}
//
//	printf("\n�迭 ���� ���: ");
//	for (i = CNT - 1; i >= 0; i--) {
//		printf("%4d", arr[i]);
//	}
//	printf("\n");
//
//	printf("�迭 �������� �� ĭ �̵�: ");
//	
//	temp = arr[0];
//	for (i = 0; i < CNT - 1; i++)
//		arr[i] = arr[i+1];
//	arr[CNT-1] = temp;
//	
//	for (i = 0; i < CNT;i++) {
//		printf("%4d", arr[i]);
//	}
//	printf("\n");
//}