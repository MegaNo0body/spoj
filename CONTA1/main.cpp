#include <iostream>
using namespace std;

int main()
{
	int n, p = 7;
	cin >> n;
	if(n > 100)
	{
		p += (n - 100) * 5;
		n -= (n - 100);
	}
	if(n > 30)
	{
		p += (n - 30) * 2;
		n -= (n - 30);
	}
	if(n > 10)
		p += (n - 10);
	cout << p;
	return 0;
}
