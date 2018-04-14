/*求多(4)个正整数的最大公约数*/

#include <iostream>
using namespace std;

int Gcd(int a, int b)
{
	return b==0?a:Gcd(b, a%b);
}

class GCD
{
public:
	GCD(int n1, int n2, int n3, int n4)
	{
		this->n1 = n1;
		this->n2 = n2;
		this->n3 = n3;
		this->n4 = n4;
	}
	void Show()
	{
		Operate();
		cout << gcd << endl;
	}
private:
	int n1,n2,n3,n4,gcd;
	void Operate()
	{
		gcd = Gcd(n1, n2);
		gcd = Gcd(gcd, n3);
		gcd = Gcd(gcd, n4);
	}
};

int main()
{
	int n;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		int n1, n2, n3, n4;
		char ch;
		cin >> n1 >> ch;
		cin >> n2 >> ch;
		cin >> n3 >> ch;
		cin >> n4 ;
		GCD a(n1, n2, n3, n4);
		a.Show();
	}
	return 0;
}
