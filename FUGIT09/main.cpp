#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, step;
	float maxdistance, currx = 0, curry = 0;
	char dir;
	cin >> n >> maxdistance;
	maxdistance *= maxdistance;
	while(n-- > 0)
	{
		cin >> dir >> step;
		switch(dir)
		{
			case 'N': curry += step; break;
			case 'S': curry -= step; break;
			case 'O': currx += step; break;
			case 'L': currx -= step; break;
		}
		if(abs(currx * currx) + abs(curry * curry) > maxdistance)
		{
			cout << 1;
			return 0;
		}
	}
	cout << 0;
	return 0;
}
