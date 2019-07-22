#include <stdio.h>
int main(void)
{
	int stdNum, scores[100]={0};
	char grades[100]={0};
	int best = scores[0], grade;
	int i;

	printf("Enter the number of students : ");
	scanf("%d", &stdNum);

	printf("Enter %d scores:", stdNum);

	for (i = 0; i < stdNum; i++) {
		scanf("%d", &scores[i]);

		if (best <= scores[i]) 
			best = scores[i];
	}
	
	for (i = 0; i < stdNum; i++) {
		if (scores[i] >= best - 10)
			grades[i] = 'A';
		else if (scores[i] >= best - 20)
			grades[i] = 'B';
		else if (scores[i] >= best - 30)
			grades[i] = 'C';
		else if (scores[i] >= best - 40)
			grades[i] = 'D';
		else
			grades[i] = 'F';
	}

	for (i = 0; i < stdNum; i++) 
		printf("Student %d scores is %d and grade is %c\n", i+1, scores[i], grades[i]);
}