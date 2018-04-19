#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int n ;
	cin >> n;
	for (int k = 0; k < n; k++)
	{
		char s1[30], s2[30], s[30];
		int a1[30], a2[30], a[30];
		cin >> s1 >> s2;
		int i, j, I = strlen(s1), J = strlen(s2);
		for(i = 0; i < I; i++)
			a1[i] = s1[i] - 48;
		for(j = 0; j < J; j++)
			a2[j] = s2[j] - 48;
		if(I>=J)
		{
			for(i = I-1, j = J-1; j >= 0; j--, i--)
				a1[i] += a2[j];
			for(i = 0; i < I; i++)
				a[i] = a1[i];
		}
		else
		{
			for(i = I-1, j = J-1; i >= 0; i--, j--)
				a2[j] += a1[i];
			for(j = 0; j < J; j++)
				a[j] = a2[j];
		}
		for(i = (I>J?I:J)-1; i >= 1; i--)
		{
			int tem = a[i]/10;
			a[i] %= 10;
			a[i-1] += tem;
		}
		i = 0;
		j = 0;
		if(a[j]/10 != 0)
		{
			s[i++] = a[j]/10 + 48;
			s[i++] = a[j]%10 + 48;
		}
		else
			s[i++] = a[j] + 48;
		for(j = 1; j < (I>J?I:J); j++)
			s[i++] = a[j] + 48;
		s[i] = '\0';
		cout << s << endl;
	}
	return 0;
}
