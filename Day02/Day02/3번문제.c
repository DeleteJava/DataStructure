#include <stdio.h>
#include <math.h>

int num_add(int num1, int num2, int num3)
{
	return num1 + num2 + num3;
}

double num_avg(int num_total,double count_subject)
{
	return num_total / count_subject;
}

char avg_grade(double num_total)
{
	if (60 > num_total) return('F');
	else if (70 > num_total) return 'D';
	else if (80 > num_total) return 'C';
	else if (90 > num_total) return 'B';
	else return 'A';
}
int main(void)
{
	int korean = 0;
	int math = 0;
	int english = 0;
	int total;
	double avg;
	char grade;
	double count_subject;
	printf("국어, 수학, 영어 점수 입력 : ");
	count_subject = scanf_s("%d%d%d", &korean, &math, &english);
	total = num_add(korean, math, english);
	avg = num_avg(total,count_subject);
	grade = avg_grade(avg);

	printf("총합 : %d\n", total);
	printf("평균 : %.2f\n", avg);
	printf("등급 : %c\n",grade);

	return 0;
}