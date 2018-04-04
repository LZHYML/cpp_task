/*依次输入三个整数，分别表示a，b，c，数字间用逗号隔开。
如果是锐角三角形，输出字符串“acute”；
如果是直角三角形，输出字符串“right”；
如果是钝角三角形，输出字符串“obtuse”；
如果无法构成三角形，输出字符串“illegal”。*/

#include <iostream>
using namespace std;

class Triangle
{
public:
	Triangle(int,int,int);
	void ShowShape();
private:
	int a,b,c;
};

int main()
{
	int a, b, c;
	cin>>a>>b>>c;
	Triangle tr(a,b,c);
	tr.ShowShape();
	return 0;
}

Triangle::Triangle(int a, int b, int c)
{
	this->a = a;
	this->b = b;
	this->c = c;
}

void Triangle::ShowShape()
{
	if(!(a+b>c && b+c>a && c+a>b))
		cout<<"illegal"<<endl;
	else if(a*a+b*b>c*c && b*b+c*c>a*a && c*c+a*a>b*b)
		cout<<"acute"<<endl;
	else if(a*a+b*b==c*c || b*b+c*c==a*a || c*c+a*a==b*b)
		cout<<"right"<<endl;
	else
		cout<<"obtuse"<<endl;
}
