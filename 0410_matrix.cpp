/*输入参数m(行),n(列)
并录入每个矩阵的值*/

#include <iostream>
using namespace std;

class Matrix
{
public:
	Matrix(int r, int c)
	{
		row = r;
		column = c;
		Array();
	}
	void Print()
	{
		int i, j;
		for(i = 0; i < row; i++)
		{
			for(j = 0; j < column; j++)
				cout << a[i][j] << " ";
			cout << endl;
		}
		for(j = 0; j < column; j++)
		{
			for(i = 0; i < row; i++)
				cout << a[i][j] << " ";
			cout << endl;
		}
	}
private:
	int row, column, a[100][100];
	void Array()
	{
		for(int i = 0; i < row; i++)
			for(int j = 0; j < column; j++)
				cin >> a[i][j];
	}
};

int main()
{
	int m, n;
	cin >> m >> n;
	if(m<=0 || n<=0)
	{
		cout<<"NO"<<endl;
		return 0;
	}
	Matrix mt(m, n);
	mt.Print();
	return 0;
}
