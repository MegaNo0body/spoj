#include <iostream>
using namespace std;

int main()
{
	int n, test=0;
	while(cin >> n && n != 0)
	{
		int res;
		int v;
		char o;
		cin >> res;
		n--;
		while(n-- > 0)
		{
			cin >> o >> v;
			if(o == '+') res += v;
			else res -= v;
		}
		cout << "Teste " << ++test << endl << res << endl << endl;
	}
	return 0;
}
