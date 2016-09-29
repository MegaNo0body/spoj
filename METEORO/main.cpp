#include <iostream>

using namespace std;

bool inRange(int v, int a, int b)
{
	if(a > b)
		return inRange(v, b, a);
	return v >= a && v <= b;
}

int main()
{
	int fx1, fy1, fx2, fy2, test=0;
	while((cin >> fx1 >> fy1 >> fx2 >> fy2) && !(fx1 == 0 && fx2 == 0 && fy1 == 0 && fy2 == 0))
	{
		int n, x, y, c=0;
		cin >> n;
		while(n-- > 0 && cin >> x >> y)
		{
			if(inRange(x, fx1, fx2) && inRange(y, fy1, fy2))		
				c++;
		}
		cout << "Teste " << ++test << endl << c << endl << endl;
	}
	return 0;
}
