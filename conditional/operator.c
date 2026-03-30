#include <stdio.h>

int main()
{
	int num1, num2, res1; //정수 숫자1, 숫자2, 연산된 결과(정수)
	double res2; //연산된 결과(실수)
	char op, a; //연산자, 반복 끝(한 글자)

	while (1) //반복문, 1(ture), 0(false) 참(ture)이면 반복함
	{
		printf("첫번째 숫자를 입력하세요:  "); //숫자1을 입력받음
		scanf_s("%d", &num1);
		printf("연산자를 입력하세요(+ - * /):  "); //연산자(*, -, *, /)를 입력받음
		scanf_s(" %c", &op);
		printf("두번째 숫자를 입력하세요:  "); //숫자2를 입력받음
		scanf_s("%d", &num2);

		switch (op) { //연산자에 따라서 입력받은 연산자를 숫자1과 숫자2를 이용하여 계산함

		case '+':
			res1 = num1 + num2;
			break; //입력받았다면 식을 계산하고 끝냄, 입력받은 연산자가 여기에 없다면 아래로 내려감

		case '-':
			res1 = num1 - num2;
			break;

		case '*':
			res1 = num1 * num2;
			break;

		case '/':
			res2 = (double)num1 / num2; // 정수를 실수형으로 바꾸기 위해 (double)을 추가함
			break;

		}

		if (op == '+' || op == '-' || op == '*') //&& -> and(모두 만족), || -> or(하나만 만족), 연산자에 맞는 결과값(정수)을 출력함
			printf("연산된 결과: %d\n", res1);
		else if (op == '/')
			printf("나눗셈 결과: %.2f\n", res2); //연산자에 따른 결과값(실수)을 출력함
		else
			printf("잘못된 연산자입니다\n"); //정해진 연산자 이외에 다른 연산자를 사용하였을 때 출력함

		printf("연산을 종료하시겠습니까? (y/Y) \n"); //식을 끝낼 건지 반복할 건지 물어봄
		scanf_s(" %c", &a); // 한 글자를 입력받음
		if (a == 'Y' || a == 'y') //y또는 Y를 입력받으면 식을 끝냄, y또는 Y 이외에 다른 것을 입력하였을 시에 식을 반복함 
			break;

	}
	return 0;
}