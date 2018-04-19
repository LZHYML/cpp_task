/*给定一个非负整数，请输出该数字二进制格式中0的个数。
例：输入9， 输出2*/

#include <iostream>
using namespace std;

class C
{
public:
	C(int n)
	{
		num = n;
		cnt = 0;
	}
	void Print0()
	{
		if(num == 0)
		{
			cout<< 1 <<endl;
			return;
		}
		int a[100];
		int tem = num, i = 0;
		while(tem != 0)
		{
			a[i++] = tem%2;
			tem /= 2;
		}
		for(--i; i >= 0; i--)
			if(a[i] == 0)
				cnt++;
		cout << cnt << endl;
	}
private:
	int num, cnt;
};

int main()
{
	int n;
	cin >> n;
	C c(n);
	c.Print0();
	return 0;
}
