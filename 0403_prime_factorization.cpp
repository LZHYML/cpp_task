/*分解质因数，如：30=2*3*5*/

#include <iostream>
using namespace std;

class Factorization
{
public:
	Factorization(int);
	void Print();
private:
	int num;
};

int main()
{
	int n;
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		int n;
		cin>>n;
		Factorization fz(n);
		fz.Print();
	}
	return 0;
}

Factorization::Factorization(int n)
{
	num = n;
}

void Factorization::Print()
{
	if(num==1 || num==2 || num==3)
	{
		cout<<num<<endl;
		return;
	}
	int tem = num, i = 1;
	while(tem%++i != 0);
	cout<<i;
	tem /= i;
	for(; i <= tem; i++)
	{
		while(tem%i==0)
		{
			cout<<'*'<<i;
			tem /= i;
		}
	}
	cout<<endl;
}
