#include <iostream>
using namespace std;

int main()
{
	int n, test=0;
	while(cin >> n && n != 0)
	{
		int a = 0, b = 0;
		for(int i=0; i<n; i++)
		{
			int ja, jb;
			cin >> ja >> jb;
			a += ja;
			b += jb;
		}
		cout << "Teste " << ++test << endl <<
			(a > b ? "Aldo" : "Beto") << endl << endl;
	
	}
	return 0;
}
