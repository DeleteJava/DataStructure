#include <stdio.h>

void Add(int num1, int num2)
{
	printf("���� �� : %d\n",num1 + num2);
}

void Sub(int num1 , int num2)
{
	printf("�� �� : %d\n", num1 - num2);
}
int Mul(int num1,int num2)
{
	return num1 * num2;
}
int Div(int num1,int num2)
{
	return num1 / num2;
}

void Calc(int num1, char oper, int num2)
{
	switch (oper)
	{
	case '+':
		Add(num1, num2);
		break;
	case '-':
		Sub(num1, num2);
		break;
	case '*':
		printf("���� �� : %d\n", Mul(num1, num2));
		break;
	case '/':
		printf("���� �� : %d\n", Div(num1, num2));
		break;
	}
}



int main(void)
{
	int num1 = 0;
	int num2 = 0;
	char oper;
	int result = 0;
	printf("���� �Է� : ");
	scanf_s("%d %c %d", &num1, &oper,1,&num2);  // scanf_s�� ���� ���� ����������Ѵ�.
	Calc(num1, oper, num2);

	/*
	switch (oper)
	{
	case '+':
		Add(num1, num2);
		break;
	case '-':
		Sub(num1, num2);
		break;
	case '*':
		printf("���� �� : %d\n", Mul(num1, num2));
		break;
	case '/':
		printf("���� �� : %d\n", Div(num1, num2));
		break;
	}
	*/
	return 0;
}