// EX02_5.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main(void)
{
	int a, b, c;
	printf("Enter two integer: ");
	scanf("%d%d", &a, &b);

	c = a / 10 * 1000 + b / 10 * 100 + a % 10 * 10 + b % 10;

	printf("Value of c: %d\n", c);

    return 0;
}