/*输入两个字符串s和t，判断是否可以从s中删除0个或多个字符
(其他字符顺序不变)得到字符串t。
满足匹配条件，输出YES
不满足匹配条件，输出NO */

#include <iostream>
#include <cstring>
using namespace std;

class Sub
{
public:
	Sub(char a[], char b[])
	{
		strcpy(str1, a);
		strcpy(str2, b);
	}
	void Show()
	{
		int i, j = 0;
		for(i = 0;i <= strlen(str2); i++)
		{
			for(;i+j <= strlen(str1);j++)
			{
				if(str1[i+j] == str2[i])
					break;
			}
			if(i+j > strlen(str1))
				break;
		}
		if(i <= strlen(str2))
		{
//			cout<<i+j<<"  "<<i<<endl;
//			cout<<strlen(str1)<<"  "<<strlen(str2)<<endl;
			cout<<"NO"<<endl;
		}
		else
		{
//			cout<<i+j<<"  "<<i<<endl;
//			cout<<strlen(str1)<<"  "<<strlen(str2)<<endl;
			cout<<"YES"<<endl;
		}
	}
private:
	char str1[100], str2[100];
};

int main()
{
	char str1[100], str2[100];
	cin >> str1;
	cin >> str2;
	Sub s(str1, str2);
	s.Show();
	return 0;
}
