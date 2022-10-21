#include <stdio.h>

void Total(int kor, int math, int eng,int* total)
{
	*total = kor + math + eng;
}

void Avg(int total, int subject_count , double* avg)
{
	*avg = total / (double)subject_count;

}

void Grade(double avg, char* grade)
{
	//if (90 <= avg) *grade = 'A';
	//else if (80 <= avg) *grade = 'B';
	//else if (70 <= avg) *grade = 'C';
	//else if (60 <= avg) *grade = 'D';
	//else *grade = 'F';
	switch ((int)avg / 10)
	{
	case 10:
	case 9:
		*grade = 'A';
		break;
	case 8:
		*grade = 'B';
		break;
	case 7:
		*grade = 'C';
		break;
	case 6:
		*grade = 'D';
		break;
	default:
		*grade = 'F';
		break;
	}
}

int main(void)
{
	int kor = 0, math = 0, eng = 0;
	int total;
	double avg;
	int subject_count;
	char grade;
	printf("국어, 수학, 영어 점수 입력 : ");
	subject_count = scanf_s("%d%d%d", &kor, &math, &eng);
	Total(kor, math, eng ,&total);
	Avg(total, subject_count ,&avg);
	Grade(avg, &grade);
	printf("총합 : %d\n", total);
	printf("평균 : %.2f\n", avg);
	printf("등급 : %c\n", grade);


	return 0;
}