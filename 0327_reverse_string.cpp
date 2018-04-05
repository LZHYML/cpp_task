/*逆序输出字符串。*/

#include <iostream>
#include <string>
using namespace std;

class RevStr
{
public:
	RevStr(char a[]);
	void RevPrint();
private:
	char str[100];
};

int main()
{
	char str[100];
	cin>>str;
	RevStr rs(str);
	rs.RevPrint();
	return 0;
}

RevStr::RevStr(char a[])
{
	int N = strlen(a);
	for(int i = 0, j = N-1; i < N; i++, j--)
		str[j] = a[i];
	str[N] = '\0';
}

void RevStr::RevPrint()
{
	cout<<str<<endl;
}
