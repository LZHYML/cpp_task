/*任取一个正整数，如果不是回文数，将该数与他的倒序数相加，
若其和不是回文数，则重复上述步骤，一直到获得回文数为止。
如果不存在回文数，或者回文数大于2^31则输入No		*/

#include <iostream>
#include <cmath>
using namespace std;

class Palindrome
{
public:
	Palindrome(int);
	bool IsPd();
	int GetNum();
	void Transform();
	void ShowNum();
private:
	int num, a[100], N;
	int Rev(int a[]);
};

int main()
{
	int n;
	cin>>n;
	Palindrome pd(n);
	while((!pd.IsPd()) && pd.GetNum()<=pow(2, 30))
	{
		pd.Transform();
	}
	if(pd.IsPd())
		pd.ShowNum();
	else
		cout<<"No"<<endl;
	return 0;
}

Palindrome::Palindrome(int n)
{
	num = n;
}

bool Palindrome::IsPd()
{
	int tem = num;
	N = 0;
	while(tem != 0)
	{
		a[N++] = tem%10;
		tem /= 10;
	}
	for(int j = 0; j <= (N-1)/2; j++)
		if(a[j] != a[N-1-j])
			return false;
	return true;
}

int Palindrome::GetNum()
{
	return num;
}

void Palindrome::Transform()
{
	num = num + Rev(a);
}

void Palindrome::ShowNum()
{
	cout<<num<<endl;
}

int Palindrome::Rev(int a[])
{
	int rev = 0;
	for(int i = 0; i < N; i++)
		rev = rev*10 + a[i];
	return rev;
}
