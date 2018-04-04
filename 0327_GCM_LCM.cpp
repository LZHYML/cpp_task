#include <iostream>
using namespace std;

class GL
{
public:
	GL(int,int);
	int ShowGCD();
	int ShowLCM();
private:
	int a,b;
};

void main()
{
	int a, b;
	cin>>a>>b;
	GL gl(a,b);
	cout<<gl.ShowGCD()<<endl;
	cout<<gl.ShowLCM()<<endl;
}

GL::GL(int a,int b)
{
	this->a = a;
	this->b = b;
}

int GL::ShowGCD()
{
	int i = a<b?a:b;
	while(!(a%i==0 && b%i==0))
		i--;
	return i;
}

int GL::ShowLCM()
{
	return a * b / ShowGCD();
}
