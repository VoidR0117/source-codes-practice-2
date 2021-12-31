#include <stdio.h>
//#include <stdlib.h>
//#define TAX_RATE 0.2

int main(void)
{
	/*short year = 0;
	int sale = 0;
	long total_sale = 0;

	year = 10;
	sale = 200000000;
	total_sale = year * sale;

	printf("total_sale = %d\n", total_sale);*/

	/*const int Months = 12;
	int m_salary, y_salary;

	printf("월급을 입력하시오: ");
	scanf_s("%d", &m_salary);
	y_salary = Months * m_salary;
	printf("연봉은 %d 입니다.", y_salary);
	printf("세금은 %f 입니다.", y_salary * TAX_RATE);*/

	//char code1 = 'B';
	//char code2 = 66;
	//
	//printf("문자 상수 초기화 = %c\n", code1);
	//printf("아스키 코드 초기화 = %c\n", code2);

	/*int id, pass;

	printf("아이디와 패스워드를 4개의 숫자로 입력하세요:");

	printf("id:_\b\b\b\b");
	scanf_s("%d", &id);

	printf("pass:_\b\b\b\b");
	scanf_s("%d", &pass);
	printf("\a입력된 아이디는\"%d\"이고 패스워드는\"%d\"입니다.", id, pass);*/

	/*float light_speed = 300000;
	double SE_distance = 149600000;
	double time;
	
	time = (SE_distance / light_speed)/60;

	printf("빛의 속도는 %fkm/s\n", light_speed);
	printf("태양과 지구의 거리 %lfkm\n", SE_distance);
	printf("도달 시간은 %lf분", time);*/


	/*double x, y, result;
	printf("두 개의 실수를 입력하시오:");
	scanf_s("%lf%lf", &x, &y);

	result = x + y;
	printf("%lf+%lf=%lf", x, y, result);

	result = x - y;
	printf("%lf-%lf=%lf", x, y, result);

	result = x * y;
	printf(" %lf * %lf = %lf", x, y, result);

	result = x / y;
	printf("^%lf/%lf=%lf,", x, y, result);*/

	/*char c;
	int i;
	float f;

	c = 10000;
	i = 1.23456 + 10;
	f = 10 + 20;
	printf("c=%d,i=%d,f=%f\n", c, i, f);*/

	/*int x, y;

	printf("두 개의 정수를 입력하시오:");
	scanf_s("%d%d", &x, &y);

	printf("%d && %d의 결과값:%d\n", x, y, x && y);
	printf("%d||%d의 결과값:%d\n", x, y, x || y);
	printf("!%d의 결과값:%d", x, !x);*/

	//int x, y;

	//printf("첫 번째 수=");
	//scanf_s("%d", &x);
	//printf("두 번째 수=");
	//scanf_s("%d", &y);

	//printf("큰수=%d\n", (x > y) ? x : y);
	//printf("작은수=%d\n", (x < y) ? x : y);

	/*int a = 10;
	int b = 20;
	int c = 30;
	int d = 3;
	int result;

	result = a + b * c / d;
	printf("연산값:%d\n", result);

	result = (a + b) * c / d;
	printf("연산값:%d\n", result);

	result = a = b = 1;
	printf("연산값:%d\n", result);*/

	/*int x = 0, y = 0;
	int result;

	result = 2 > 3 || 6 > 7;
	printf("%d\n", result);

	result = 2 || 3 && 3 > 2;
	printf("%d\n", result);

	result = x = y = 1;
	printf("%d %d\n", x, y);
	printf("%d\n", result);

	result = ++x + y--;
	printf("%d %d\n", x, y);
	printf("%d\n", result);*/

	//double f_temp;
	//double c_temp;

	//printf("화씨온도를 입력하시오");
	//scanf_s("%lf", &f_temp);
	//c_temp = 5 / 9 * (f_temp - 32);
	////c_temp = 5.0 / 9.0 * (f_temp - 32);
	//printf("섭씨온도는 %f입니다", c_temp);

	//printf("%6d\n", 20);
		
	/*int number;

	printf("정수를 입력하시오:");
	scanf_s("%d", &number);

	if (number > 0);
		printf("양수입니다.\n");

	printf("입력된 값은 %d입니다.", number);*/

	//int number;

	//printf("정수를 입력하시오:");
	//scanf_s("%d", &number);

	//if (number < 0);
	//	number = -number;

	//printf("절대값은 %d입니다.\n", number);

	/*int year;

	printf("연도를 입력하시오: ");
	scanf_s("%d", &year);

	if(year%4==0 && year%100!=0||year%400==0)
		printf("%d년은 윤년입니다\n",year);
	else
		printf("%d년은 윤년이 아닙니다.\n",year);*/

	//printf("동전던지기 게임을 시작합니다.\n");

	/*int coin = rand() % 2;
	printf("%d", coin);
	if (coin == 0)
		printf("앞면입니다.\n");
	else
		printf("뒷면입니다.\n");*/

	//int score;
	//scanf_s("%d", & score);

	//if (score >= 90 && score <= 100)
	//	printf("grade=A");
	//else if (score >= 80 &&score <90 )
	//	printf("grade=B");
	//else if (score >= 70 && score < 80)
	//	printf("grade=C");
	//else if (score >= 60 && score < 70)
	//	printf("grade=D");
	//else
	//	printf("grade=F");

	/*char op;
	int x, y, result;

	printf("수식을 입력하시오");
	printf("(예:2+5)");
	printf(">>");

	scanf_s("%d %c %d", &x, &op, &y);

	if (op == '+')
		result = x + y;
	else if (op == '-')
		result = x - y;
	else if (op == '*')
		result = x * y;
	else if (op == '/')
		result = x / y;
	else if (op == '%')
		result = x % y;
	else
		printf("지원되지 않는 연산자입니다.");
	printf(" %d %c %d = %d", x, op, y, result);*/
	
	/*int month, days;

	printf("달을 입력하시오:");
	scanf_s("%d", &month);

	switch (month)
	{
		case 2:
			days = 28;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			days = 30;
			break;
		default:
			days = 31;
			break;
	}
	printf("%d월의 일수는 %d 입니다.\n", month, days);

	return 0;


}*/


