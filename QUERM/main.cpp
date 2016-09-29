#include <iostream>
using namespace std;

int main()
{
	int n, test=0;
	while(cin >> n && n != 0)
	{
		for(int j, i=0; i<n; i++)
			if(cin >> j && j == (i+1))
				cout << "Teste " << ++test << endl << j << endl << endl;
	}
	return 0;
}
