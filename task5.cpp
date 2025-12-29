#include<iostream>
using namespace std;
int main()
{
	int rows = 5;
	for (int i = 1; i <= 5; ++i)
	{
		for (int j = 5; j >= i; --j)
		{
			cout << " ";
		}
		for (int k = 1; k <= 2*i-1; k = k + 1)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}