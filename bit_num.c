/*输入一个正整数，判断有多少位。*/

#include <stdio.h>

int Bit(int k)
{
	int bit = 0;
	while(k!=0)
	{
		k /= 10;
		bit++;
	}
	return bit;
}

void main()
{
	int n, i;
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		int k;
		scanf("%d", &k);
		printf("%d\n", Bit(k));
	}
}
