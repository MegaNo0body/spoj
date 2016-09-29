#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t, d, i;
	size_t l;
	string s;
	char w;
	while(cin >> t >> d && !(t == 0 && d == 0))
	{
		cin >> s;
		while(d-- > 0)
		{
			l = s.length() - 1;
			w = '9';
			for(i = s.length() - 1; i>=0; i--)
			{
				if(s[i] <= w)
				{
					l = i;
					w = s[i];
				}
			}
			s.erase(l, 1);
		}
		cout << s << endl;
	}
	return 0;
}
