#include <stdio.h>

int main(void)
{
	float rate;
	float usd;
	int krw;

	printf("달러에 대한 원화 환율을 입력하시오: ");
	scanf_s("%f", &rate);

	printf("원화 금액을 입력하시오: ");
	scanf_s("%d", &krw);

	usd = krw / rate;

	printf("원화 %d원은 %f 달러입니다.\n ", krw, usd);

	return 0;
}