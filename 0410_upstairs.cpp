/*上N阶楼梯，一次可以走两阶或一阶，
问有多少种上楼方式。*/

#include <iostream>
using namespace std;

class Upstairs
{
public:
	Upstairs(int N)
	{
		this->N = N;
		waynum = 0;
	}
	void Show()
	{
		Calculation();
		cout<<waynum<<endl;
	}
private:
	int N, waynum;
	void Calculation()
	{
		int n, r;
		waynum = 0;
		for(n = N, r = 0; r <= n; n--, r++)
			waynum += C(n, r);
	}
	int C(int n, int r)
	{
		int c = 1;
		for(int i = 1; i <= r; i++)
			c = c*(n-i+1)/i;
		return c;
	}
};

int main()
{
	int N;
	cin>>N;
	Upstairs up(N);
	up.Show();
	return 0;
}
