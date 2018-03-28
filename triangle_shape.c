/*依次输入三个整数，分别表示a，b，c，数字间用逗号隔开。
如果是锐角三角形，输出字符串“acute”；
如果是直角三角形，输出字符串“right”；
如果是钝角三角形，输出字符串“obtuse”；
如果无法构成三角形，输出字符串“illegal”。*/

#include <stdio.h>

void PrintShape(int a, int b, int c)
{
	if(!(a+b>c&&b+c>a&&c+a>b))
		printf("illegal");
	else if(a*a+b*b>c*c && b*b+c*c>a*a && c*c+a*a>b*b)
		printf("acute");
	else if(a*a+b*b==c*c || b*b+c*c==a*a || c*c+a*a==b*b)
		printf("right");
	else
		printf("obtuse");
}

void main()
{
	int a, b, c;
	scanf("%d,%d,%d", &a, &b, &c);
	PrintShape(a, b, c);
}
