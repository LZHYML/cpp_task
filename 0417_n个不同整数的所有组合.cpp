#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

void PrintT(int n, char a[])
{
	if(n == 1)
	{
		cout << "--> " << a[0] << endl;
		return ;
	}
	int cnt = 0;
	char str[100] = "0";
	while(strlen(a) > strlen(str))
	{
		cout << "--> ";
		for(int i = 0; i < n; i++)
		{
			if(str[n-1-i] != '1')
				cout << a[i] << " ";
		}
		cout << endl;
		cnt++;
		int tem = cnt, j = 0;
		while(tem != 0)
		{
			str[j++] = tem%2 + 48;
			tem /= 2;
		}
		str[j] = '\0';
	}
}

void PAC(int n, char a[])
{
	if(n != 0)
	{
		PrintT(n, a);
		PAC(n-1, a+1);
	}
	else
		cout << "--> " << endl;
}

int main()
{
	int m;
	cin >> m;
	for(int i = 0; i < m; i++)
	{
		int n, j;
		char a[100];
		cin >> n;
		for(j = 0; j < n; j++)
			cin >> a[j];
		a[j] = '\0';
		PAC(n, a);
	}
	return 0;
}
