/*输入：正整数n
输出：1+（1+2）+（1+2+3）+...+（1+2+3+...+n）的值*/

#include <iostream>
using namespace std;

class Sum
{
public:
	Sum(int n)
	{
		this->n = n;
	}
	void Print()
	{
		int ssum = 0, sum = 0;
		for(int i = 1; i <= n; i++)
		{
			sum += i;
			ssum += sum;
		}
		cout<<ssum<<endl;
	}
private:
	int n;
};

int main()
{
	int n;
	cin>>n;
	Sum a(n);
	a.Print();
	return 0;
}
