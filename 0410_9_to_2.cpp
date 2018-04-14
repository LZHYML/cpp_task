#include <iostream>
using namespace std;
#define IN 9
#define OUT 2

class Transform
{
public:
	Transform(int n)
	{
		num_in = n;
	}
	void Show()
	{
		In_Go();
		To_Out();
		cout<< num_out << endl;
	}
private:
	unsigned long int num_in, num_10, num_out;
	void In_Go()
	{
		num_10 = 0;
		int a[100] = {0}, tem = num_in, bit;
		for(bit = 0;tem != 0; bit++)
		{
			a[bit] = tem%10;
			tem /= 10;
		}
		int B = --bit;
		for(; bit > 0; bit--)
			for(int b = bit; b <= B; b++)
				a[b] *= 9;
		for(bit = 0; bit <= B; bit++)
			num_10 += a[bit];
	}
	void To_Out()
	{
		int tem = num_10, a[100] = {0}, i;
		num_out = 0;
		for(i = 0; tem != 0; i++)
		{
			a[i] = tem%OUT;
			tem /= OUT;
		}
		int N = --i;
		for(; i >= 0; i--)
			num_out = num_out*10 + a[i];
	}
};

int main()
{
	int n;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		int k;
		cin >> k;
		Transform tf(k);
		tf.Show();
	}
	return 0;
}
