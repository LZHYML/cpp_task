#include <iostream>
using namespace std;

int main()
{
	int k;
	cin >> k;
	for(int i = 0; i < k; i++)
	{
		int n, j, tem = 1;
		cin >> n;
		for(j = 1; j <= n; j++)
		{
			tem *= j;
			while(tem%10==0)
				tem /= 10;
			while(tem > 1000)
				tem %= 1000;
		}
		cout << tem%10 << endl;
	}
	return 0;
}
