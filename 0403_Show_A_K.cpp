/*计算一个数组A[N]（N<=100）中，第K(1>=K && K <=N)小的数
第1行是一个整数N，表示数组A的大小，然后接收一个整数K
（1>=K && K <=N）。最后读入N个整数，表示数组A的每一个元素。
注意：数组元素是无序的，且任意两个元素不相等！！！*/

#include <iostream>
using namespace std;

class A
{
public:
	A(int n, int k);
	void InputA();
	void ShowK();
private:
	int N, K;
	int a[100];
	void Sort();

};

int main()
{
	int N, K;
	cin>>N>>K;
	A a(N,K);
	a.InputA();
	a.ShowK();
	return 0;
}

A::A(int n, int k)
{
	N = n;
	K = k;
}

void A::InputA()
{
	for(int i = 0; i < N; i++)
		cin>>a[i];
}

void A::ShowK()
{
	Sort();
	cout<<a[K-1]<<endl;
}

void A::Sort()
{
	for(int i = 0; i < N-1; i++)
	{
		for(int j = 0; j < N-1-i; j++)
		{
			if(a[j] > a[j+1])
			{
				int tem = a[j];
				a[j] = a[j+1];
				a[j+1] = tem;
			}
		}
	}
}
