/*统计单词数: 输入一个字符串，判断其包含几个单词
（单词之间仅由空格来分隔，且字符串不包含空格以外的特殊字符）
输入仅包含一行，为一个字符串（已知长度小于100），回车结束*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class String
{
public:
	String();
//	~String();
	void InputString();
	void PrintNum();
private:
	int num;
};

int main()
{
	String str;
	str.InputString();
	str.PrintNum();
	return 0;
}

String::String()
{
	num = 0;
}

void String::InputString()
{
	char str[1000];
	int i = 0;
	str[++i] = getchar();
	while(1)
	{
		if(isalpha(str[i]))
		{
			num++;
			break;
		}
		str[++i] = getchar();
	}
	str[++i] = getchar();
	while(str[i] != '\n')
	{
		if(str[i-1]==' ' && isalpha(str[i]))
			num++;
		str[++i] = getchar();
	}
}

void String::PrintNum()
{
	cout<<num<<endl;
}
