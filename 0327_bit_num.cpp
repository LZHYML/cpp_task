/*输入一个正整数，判断有多少位。*/

#include <iostream>
#include <string>
using namespace std;

class BitNum
{
public:
	BitNum(int);
	int GetBit();
private:
	int num;
};

int main()
{
	int n;
	cin>>n;
	BitNum bn(n);
	cout<<bn.GetBit()<<endl;;
	return 0;
}

BitNum::BitNum(int n)
{
	num = n;
}

int BitNum::GetBit()
{
	int bit = 0, tem = num;
	while(tem != 0)
	{
		tem /= 10;
		bit++;
	}
	return bit;
}
