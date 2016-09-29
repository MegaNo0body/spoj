#include <iostream>
using namespace std;

int main()
{
	int inst = 0, n;
	while(cin >> n)
	{
		int s = 0;
		bool p = false;
		cout << "Instancia " << ++inst << endl;
		for(int i=0; i<n; i++)
		{
			int v;
			cin >> v;
			if(!p)
			{
				p = v == s;
				if(p)
					cout << v;
				s += v;
			}
		}
		if(!p) cout << "nao achei";
		cout << endl << endl;
	}
}
