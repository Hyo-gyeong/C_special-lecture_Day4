#include <stdio.h>//**********************************day4_1,2
#include <stdlib.h>
#include <time.h>

const int CNT = 10;//데이터수가 늘어나도 쉽게 고칠 수 있음

int main(void)
{//최대, 역순
	int arr[10];
	int i = 0, biggest, smallest;
	int temp,last,hold;
	
	srand(time(NULL));

	arr[0] = rand() % 100;//생성 = 입력 = 분리

	biggest = arr[0];
	smallest = arr[0];

	do {
		i++;

		arr[i] = rand() % 100;//생성 = 입력 = 분리
				
		if (biggest <= arr[i])
			biggest = arr[i];

		if (smallest >= arr[i])
			smallest = arr[i];

	}while(i < CNT-1);

	printf("최댓값은: %d\n", biggest);
	printf("최솟값은: %d\n", smallest);

	printf("배열 출력: ");
	for (i = 0; i < CNT; i ++) {
		printf("%4d", arr[i]);
	}

	;

	printf("\n배열 역순 출력: ");
	for (i = CNT - 1; i >= 0; i--) {
		printf("%4d", arr[i]);
	}
	printf("\n");

	printf("배열 왼쪽으로 한 칸 이동: ");
	
	temp = arr[0];
	for (i = 0; i < CNT - 1; i++)
		arr[i] = arr[i+1];
	arr[CNT-1] = temp;
	
	for (i = 0; i < CNT;i++) {
		printf("%4d", arr[i]);
	}
	printf("\n");

	//printf("배열 오른쪽으로 한 칸 이동: ");
	//
	//for (i = 1; i < CNT - 2; i++) {
	//	//arr[i] = arr[i-1];//덮어버리면 덮은 상태로 다음꺼로 가니까 계속 같은 수가 반복 됨. IDEA!8번째 배열부터 왼쪽으로 덮는다고 생각해보는것도 방법~
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
//const int CNT = 10;//데이터수가 늘어나도 쉽게 고칠 수 있음
//
//int main(void)
//{//최대, 역순
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
//		if (biggest <= arr[i])  이렇게 하면 처음과 끝을 계속 비교하게 되서 무조건 처음과 끝이 출력됨....!!*******************************
//			biggest = arr[i];
//
//		if (smallest >= arr[i])
//			smallest = arr[i];
//
//		i++;
//
//	}while(i < CNT);
//
//	printf("최댓값은: %d\n", biggest);
//	printf("최솟값은: %d\n", smallest);
//
//	printf("배열 출력: ");
//	for (i = 0; i < CNT; i ++) {
//		printf("%4d", arr[i]);
//	}
//
//	printf("\n배열 역순 출력: ");
//	for (i = CNT - 1; i >= 0; i--) {
//		printf("%4d", arr[i]);
//	}
//	printf("\n");
//
//	printf("배열 왼쪽으로 한 칸 이동: ");
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