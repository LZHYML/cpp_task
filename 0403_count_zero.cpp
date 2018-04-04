/*100!的末尾有多少个零？*/

#include <iostream>
using namespace std;

int main()
{
	int i25 = 0, i5 = 0;
	for(int i = 1; i <= 100; i++)
	{
		if(i%25==0)
			i25 += 2;
		else if(i%5==0)
			i5++;
	}
	cout<<i25 + i5<<endl;
	return 0;
}
