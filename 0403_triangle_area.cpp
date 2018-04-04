/*利用海伦公式求三角形面积
对每组数据，如果a、b、c能构成三角形，则输出三角形的面积，
结果保留两位小数；如果不能构成三角形，
则输出“不能构成三角形”，并换行*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class Triangle
{
public:
	Triangle(double,double,double);
	bool Illegal();
	void ShowArea();
private:
	double a, b, c;
};

int main()
{
	int n;
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		int a, b, c;
		cin>>a>>b>>c;
		Triangle tr(a, b, c);
		if(tr.Illegal())
			cout<<"Failed"<<endl;
		else
			tr.ShowArea();
	}
	return 0;
}

Triangle::Triangle(double a1,double b1,double c1)
{
	a = a1;
	b = b1;
	c = c1;
}

bool Triangle::Illegal()
{
	if(a+b>c && b+c>a && c+a>b)
		return false;
	else
		return true;
}

void Triangle::ShowArea()
{
	double p = (a+b+c)/2;
	double area = sqrt(p*(p-a)*(p-b)*(p-c));
	cout<<setiosflags(ios::fixed)<<setprecision(2)<<area<<endl;
}
