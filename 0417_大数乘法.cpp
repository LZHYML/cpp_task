#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char s1[10], s2[10], srst[20];
	int a1[10], a2[10], arst[20] = {0}, i, j;
	cin >> s1 >> s2;
	int I = strlen(s1), J = strlen(s2);
	for(i = 0; i < I; i++)
		a1[i] = s1[i] - 48;
	for(j = 0; j < J; j++)
		a2[j] = s2[j] - 48;
	for(j = 0; j < J; j++)
		for(i = 0; i < I; i++)
			arst[i+j] += a1[i]*a2[j];
	for(i = I+J-2; i >= 1; i--)
	{
		int tem = arst[i]/10;
		arst[i] %= 10;
		arst[i-1] += tem;
	}
	i = 0;
	j = 0;
	if(arst[j]/10 != 0)
	{
		srst[i++] = arst[j]/10 + 48;
		srst[i++] = arst[j]%10 + 48;
	}
	else
		srst[i++] = arst[j] + 48;
	for(j = 1; j < I+J-1; j++)
		srst[i++] = arst[j] +48;
	srst[i] = '\0';
	cout << srst << endl;
	return 0;
}
