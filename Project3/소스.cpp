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

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &m_salary);
	y_salary = Months * m_salary;
	printf("������ %d �Դϴ�.", y_salary);
	printf("������ %f �Դϴ�.", y_salary * TAX_RATE);*/

	//char code1 = 'B';
	//char code2 = 66;
	//
	//printf("���� ��� �ʱ�ȭ = %c\n", code1);
	//printf("�ƽ�Ű �ڵ� �ʱ�ȭ = %c\n", code2);

	/*int id, pass;

	printf("���̵�� �н����带 4���� ���ڷ� �Է��ϼ���:");

	printf("id:_\b\b\b\b");
	scanf_s("%d", &id);

	printf("pass:_\b\b\b\b");
	scanf_s("%d", &pass);
	printf("\a�Էµ� ���̵��\"%d\"�̰� �н������\"%d\"�Դϴ�.", id, pass);*/

	/*float light_speed = 300000;
	double SE_distance = 149600000;
	double time;
	
	time = (SE_distance / light_speed)/60;

	printf("���� �ӵ��� %fkm/s\n", light_speed);
	printf("�¾�� ������ �Ÿ� %lfkm\n", SE_distance);
	printf("���� �ð��� %lf��", time);*/


	/*double x, y, result;
	printf("�� ���� �Ǽ��� �Է��Ͻÿ�:");
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

	printf("�� ���� ������ �Է��Ͻÿ�:");
	scanf_s("%d%d", &x, &y);

	printf("%d && %d�� �����:%d\n", x, y, x && y);
	printf("%d||%d�� �����:%d\n", x, y, x || y);
	printf("!%d�� �����:%d", x, !x);*/

	//int x, y;

	//printf("ù ��° ��=");
	//scanf_s("%d", &x);
	//printf("�� ��° ��=");
	//scanf_s("%d", &y);

	//printf("ū��=%d\n", (x > y) ? x : y);
	//printf("������=%d\n", (x < y) ? x : y);

	/*int a = 10;
	int b = 20;
	int c = 30;
	int d = 3;
	int result;

	result = a + b * c / d;
	printf("���갪:%d\n", result);

	result = (a + b) * c / d;
	printf("���갪:%d\n", result);

	result = a = b = 1;
	printf("���갪:%d\n", result);*/

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

	//printf("ȭ���µ��� �Է��Ͻÿ�");
	//scanf_s("%lf", &f_temp);
	//c_temp = 5 / 9 * (f_temp - 32);
	////c_temp = 5.0 / 9.0 * (f_temp - 32);
	//printf("�����µ��� %f�Դϴ�", c_temp);

	//printf("%6d\n", 20);
		
	/*int number;

	printf("������ �Է��Ͻÿ�:");
	scanf_s("%d", &number);

	if (number > 0);
		printf("����Դϴ�.\n");

	printf("�Էµ� ���� %d�Դϴ�.", number);*/

	//int number;

	//printf("������ �Է��Ͻÿ�:");
	//scanf_s("%d", &number);

	//if (number < 0);
	//	number = -number;

	//printf("���밪�� %d�Դϴ�.\n", number);

	/*int year;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &year);

	if(year%4==0 && year%100!=0||year%400==0)
		printf("%d���� �����Դϴ�\n",year);
	else
		printf("%d���� ������ �ƴմϴ�.\n",year);*/

	//printf("���������� ������ �����մϴ�.\n");

	/*int coin = rand() % 2;
	printf("%d", coin);
	if (coin == 0)
		printf("�ո��Դϴ�.\n");
	else
		printf("�޸��Դϴ�.\n");*/

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

	printf("������ �Է��Ͻÿ�");
	printf("(��:2+5)");
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
		printf("�������� �ʴ� �������Դϴ�.");
	printf(" %d %c %d = %d", x, op, y, result);*/
	
	/*int month, days;

	printf("���� �Է��Ͻÿ�:");
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
	printf("%d���� �ϼ��� %d �Դϴ�.\n", month, days);

	return 0;


}*/


