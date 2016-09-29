#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	while(cin >> n && n != 0)
	{
		int bv = 0, v;
		vector<int> votos;
		votos.reserve(n);
		for(int i=0; i<n; i++) votos[i] = 0;
		for(int i=0; i<n; i++)
			for(int j=0; j<n; j++)
			{
				cin >> v;
				if(v == 1)
				{
					votos[j]++;
					if(votos[j] > bv)
						bv = votos[j];
				}
			}
			cout << bv << endl;
	}
	return 0;
}
