#include <iostream>
using namespace std;
int map[501][501] = {0};
int main()
{
	int n, x, y;
	cin >> n;
	while(n-- > 0)
	{
		cin >> x >> y;
		if(map[x][y] == 1)
		{
			cout << 1;
			return 0;
		}
		map[x][y] = 1;
	}
	cout << 0;
	return 0;
}
