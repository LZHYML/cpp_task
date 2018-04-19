#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int m, cnt = 0, i;
	char strA[10][100], strT[100];
	cin >> m;
	for(i = 0; i < m; i++)
		cin >> strA[i];
	cin >> strT;
	for(i = 0; i < m; i++)
		if(strcmp(strA[i], strT) == 0)
			cnt++;
	cout << cnt << endl;
	return 0;
}
