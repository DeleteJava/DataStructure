#include <stdio.h>

// �Լ��� ����ϸ� ������ �ڵ��� ���, �������� ����
// ���������� ������

// ��ȯ�� : �Լ� ������ �۾��� ��ġ�� ���� ��ȯ���� �� ����� �ڷ���

// �Լ� �̸� : �Լ��� ����ϱ� ���� ȣ���� �� ����� �̸�

// �Ű� ���� : �Լ��� ȣ���� �� ���� ������ �� �ִµ�, �� �� ���� �����ϴ� ����

// �Լ� ��� : �Լ��� ����� �þ��� �ڵ���� �ۼ��Ǵ� ����

/*
int Add(int a, int b)
{
	return a + b;
}
*/

// ��ȯ���� ������ ���� : �Լ��� ��ȯ���ִ� ���� ������ ����

// ȣ���� �Լ� �̸� : ���ǵ� �Լ� �� ����� �Լ��� �̸�

// �μ� : �Լ��� ������ �� �ʿ��� ��

/*
			(��ȯ���� �����ϴ� �Լ� ȣ�� ����) 
	��ȯ���� ������ ���� = ȣ���� �Լ� �̸�(�μ�);

			(��ȯ���� �������� �ʴ� �Լ� ȣ�� ����)
	ȣ���� �Լ� �̸�(�μ�);

*/

/*
int Add(int n1, int n2)
{
	return n1 + n2;
}

void Add2(int n1, int n2)
{
	printf("���� ��� : %d", n1 + n2);
}
*/

void input(int * num1,int *num2)
{
	printf("�� ���� �Է��ϼ��� : ");
	scanf_s("%d%d", num1, num2);
}

void Add(int n1, int n2)
{
	printf("���� �� : %d\n",n1 + n2);
}

void Sub(int n1, int n2)
{
	printf("�� �� : %d\n",n1 - n2);
}

int Mul(int n1, int n2)
{
	return n1 * n2;
}

int Div(int n1, int n2)
{
	return n1 / (double)n2;
}
int main(void)
{	/*
	int result;
	result = Add(5, 23);
	printf("���� ��� : %d\n", result);
	Add2(2, 3);
	*/
	
	int num1 = 0, num2 = 0;
	int product; // ���� ���� ����
	double remainder; // ������ ���� ����
	input(&num1, &num2);
	Add(num1, num2);
	Sub(num1, num2);
	product = Mul(num1, num2);
	remainder = Div(num1, num2);
	printf("���� �� : %d\n", product);
	printf("���� �� : %.f\n",remainder);



	return 0;
}