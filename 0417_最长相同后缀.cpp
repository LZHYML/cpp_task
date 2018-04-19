#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char s1[100], s2[100];
	cin >> s1 >> s2;
	int I = strlen(s1), J = strlen(s2);
	int k = 0;
	while(strcmp(s1+I-1-k, s2+J-1-k)==0)
	{
		if(I-1-k<0 || J-1-k<0)
			break;
		k++;
	}
	if(k == 0)
		cout << "null" << endl;
	else
			cout << s1+I-k << endl;
	return 0;
}
