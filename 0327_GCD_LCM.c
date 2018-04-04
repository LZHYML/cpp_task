#include <stdio.h>

int GCD(int a, int b)
{
	return b==0?a:GCD(b, a%b);
}

int LCM(int a, int b)
{
	return a * b / GCD(a, b);
}

void main()
{
	int a, b;
	printf("请输入两个正整数：");
	scanf("%d %d", &a, &b);
	printf("最大公因数：%d\n", GCD(a,b));
	printf("最小公倍数：%d\n", LCM(a,b));
}
