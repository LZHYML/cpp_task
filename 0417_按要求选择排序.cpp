#include <iostream>
using namespace std;

int main()
{
	int n, a[100], i, j;
	cin >> n;
	for(i = 0; i < n; i++)
		cin >> a[i];
	for(j = 0; j < n-1; j++)
	{
		int imin = j;
		for(i = j+1; i < n; i++)
			if(a[imin] > a[i])
				imin = i;
		int tem = a[imin];
		a[imin] = a[j];
		a[j] = tem;
		for(i = 0; i < n; i++)
			cout << a[i] << " ";
		cout << endl;
	}
	return 0;
}
