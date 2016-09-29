#include <iostream>
using namespace std;

int main()
{
	int n, soma = 0;
	cin >> n;
	while(n-- > 0)
	{
		int j;
		cin >> j;
		soma += j;
	}
	cout << soma;
	return 0;
}
