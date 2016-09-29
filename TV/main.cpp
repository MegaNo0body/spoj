#include <iostream>

using namespace std;

int main()
{
	int h, w, x, y, cx, cy;
	int map[1001][1001];
	while(cin >> h >> w && !(h == 0 && w == 0))
	{
		for(y = 0; y < h; y++)
			for(x = 0; x < w; x++)
				cin >> map[x][y];
		cx = cy = 0;
		while(cin >> x >> y && !(x == 0 && y == 0))
		{
			cx += x;
			cy += y;
		}
		for(y = 1; y <= h; y++)
		{
			for(x = 1; x <= w; x++)
			{
				cout << map[(x + cx) % w][(y + cy) % h] << ' ';
			}
			cout << '\n';
		}
	}
}
