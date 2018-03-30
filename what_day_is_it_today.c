/*已知1900年1月1日是星期一，问这天之后的任意一天是星期几？
1900年1月1日以后的任一合法日期，格式为yyyy-MM-dd，如2000-01-01。
输入日期所对应的星期。*/

#include <stdio.h>

int IsLeapYear(int i)
{
	if(i%4==0 && i%100 != 0 || i%400==0)
		return 1;
	else
		return 0;
}

int Lynum(int y)
{
	int i, ly = 0;
	for(i = 1900; i < y; i++)
	{
		if(IsLeapYear(i))
			ly++;
	}
	return ly;
}

void main()
{
	int daynum[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	int y, m, d, num, ly, month;
	scanf("%d-%d-%d", &y, &m, &d);	//录入日期
	ly = Lynum(y);					//此年之前有多少个闰年
	num = (y-1900)*365 + ly;		//此年之前有多少天
	for(month = 1; month < m; month++)
		num += daynum[month];		//此月之前有多少天
	if(IsLeapYear(y) && m > 2)
		num++;						//补此年闰日
	num += d;						//到此共有多少天
	switch(num%7)					//输出星期
	{
	case 1:
		printf("Monday");break;
	case 2:
		printf("Tuesday");break;
	case 3:
		printf("Wednesday");break;
	case 4:
		printf("Thursday");break;
	case 5:
		printf("Friday");break;
	case 6:
		printf("Saturday");break;
	case 0:
		printf("Sunday");break;
	}
	printf("\n");
}
