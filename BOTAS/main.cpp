#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	while(cin >> n)
	{
		vector<int> ld(31, 0), le(31, 0);
		int t, pares=0;
		char p;
		while(n-- > 0)
		{
			cin >> t >> p;
			t -= 30;
			if(p == 'D')
			{
				ld[t]++;
			}
			else
			{
				le[t]++;
			}
			if(ld[t] >= 1 && le[t] >= 1)
			{
				ld[t]--;
				le[t]--;
				pares++;
			}
		}
		cout << pares << endl;
	}
}
