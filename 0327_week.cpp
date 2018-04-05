/*已知1900年1月1日是星期一，问这天之后的任意一天是星期几？
1900年1月1日以后的任一合法日期，格式为yyyy-MM-dd，如2000-01-01。
输入日期，输出所对应的星期。*/

#include <iostream>
using namespace std;

class Week
{
public:
	Week(int y=2000, int m=1, int d=1);
	void PrintWeek();
	void CountDayNum();
private:
	int year, month, day, daynum;
	int IsLeapYear();
};

int dn[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

int main()
{
	int y, m, d;
	char ch;
	cin>>y>>ch>>m>>ch>>d;
	Week wk(y,m,d);
	wk.CountDayNum();
	wk.PrintWeek();
	return 0;
}

Week::Week(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
	daynum = 0;
}

void Week::PrintWeek()
{
//	cout<<daynum<<endl;
	switch(daynum%7)
	{
	case 0:
		cout<<"Sunday"<<endl;break;
	case 1:
		cout<<"Monday"<<endl;break;
	case 2:
		cout<<"Tuesday"<<endl;break;
	case 3:
		cout<<"Wednesday"<<endl;break;
	case 4:
		cout<<"Thursday"<<endl;break;
	case 5:
		cout<<"Friday"<<endl;break;
	case 6:
		cout<<"Saturday"<<endl;break;
	}
}

void Week::CountDayNum()
{
	for(int i = 1900; i < year; i++)
	{
		Week isly(i);
		daynum += isly.IsLeapYear() + 365;
	}
	for(i = 1; i < month; i++)
		daynum += dn[i];
	if(month>2 && IsLeapYear())
		daynum++;
	daynum += day;
}

int Week::IsLeapYear()
{
	if(year%4==0 && year%100!=0 || year%400==0)
		return 1;
	else
		return 0;
}
