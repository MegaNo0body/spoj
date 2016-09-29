#include <iostream>
#include <map>
using namespace std;

int main()
{
	map<int, int> votos;
	int n, c, bc = 0;
	cin >> n;
	while(n-- > 0)
	{
		cin >> c;
		votos[c]++;
		if(bc < votos[c])
			bc = c;
	}
	cout << bc;
	return 0;
}
