#include <stdio.h>

// 함수를 사용하면 복잡한 코드일 경우, 가독성이 좋음
// 유지보수가 용이함

// 반환형 : 함수 내용의 작업을 마치고 값을 반환해줄 때 사용할 자료형

// 함수 이름 : 함수를 사용하기 위해 호출할 때 사용할 이름

// 매개 변수 : 함수를 호출할 때 값을 전해줄 수 있는데, 이 때 값을 저장하는 변수

// 함수 기능 : 함수의 기능을 맡아줄 코드들이 작성되는 영역

/*
int Add(int a, int b)
{
	return a + b;
}
*/

// 반환값을 저장할 변수 : 함수가 반환해주는 값을 저장할 변수

// 호출할 함수 이름 : 정의된 함수 중 사용할 함수의 이름

// 인수 : 함수가 동작할 때 필요한 값

/*
			(반환값이 존재하는 함수 호출 유형) 
	반환값을 저장할 변수 = 호출할 함수 이름(인수);

			(반환값이 존재하지 않는 함수 호출 원형)
	호출할 함수 이름(인수);

*/

/*
int Add(int n1, int n2)
{
	return n1 + n2;
}

void Add2(int n1, int n2)
{
	printf("연산 결과 : %d", n1 + n2);
}
*/

void input(int * num1,int *num2)
{
	printf("두 수를 입력하세요 : ");
	scanf_s("%d%d", num1, num2);
}

void Add(int n1, int n2)
{
	printf("더한 값 : %d\n",n1 + n2);
}

void Sub(int n1, int n2)
{
	printf("뺀 값 : %d\n",n1 - n2);
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
	printf("연산 결과 : %d\n", result);
	Add2(2, 3);
	*/
	
	int num1 = 0, num2 = 0;
	int product; // 곱셈 저장 변수
	double remainder; // 나눗셈 저장 변수
	input(&num1, &num2);
	Add(num1, num2);
	Sub(num1, num2);
	product = Mul(num1, num2);
	remainder = Div(num1, num2);
	printf("곱한 값 : %d\n", product);
	printf("나눈 값 : %.f\n",remainder);



	return 0;
}