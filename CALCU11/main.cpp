#include <iostream>
using namespace std;

int main()
{
	int n;
	double res = 1;
	cin >> n;
	while(n-- > 0)
	{
		int va;
		char op;
		cin >> va >> op;
		if(op == '*')
			res *= va;
		else if(op == '/')
			res /= va;
	}
	cout << (int)res;

}
