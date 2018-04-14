#include <iostream>
#include <iomanip>
using namespace std;

double Tax(double income)
{
	double tax = 0;
	if(income <= 3500)
		tax = 0;
	else if(income <= 3500+1500)
		tax = (income-3500)*0.03 + Tax(3500);
	else if(income <= 3500+4500)
		tax = (income-3500-1500)*0.1 + Tax(3500+1500);
	else if(income <= 3500+9000)
		tax = (income-3500-4500)*0.2 + Tax(3500+4500);
	else if(income <= 3500+35000)
		tax = (income-3500-9000)*0.25 + Tax(3500+9000);
	else if(income <= 3500+55000)
		tax = (income-3500-35000)*0.3 + Tax(3500+35000);
	else if(income <= 3500+80000)
		tax = (income-3500-55000)*0.35 + Tax(3500+55000);
	else
		tax = (income-3500-80000)*0.45 + Tax(3500+80000);
	return tax;
}

int main()
{
	double n;
	cin >> n;
	cout << setiosflags(ios::fixed) << setprecision(2) << Tax(n) << endl;
	return 0;
}
