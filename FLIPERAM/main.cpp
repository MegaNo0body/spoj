#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, m, k;
	cin >> n >> m;
	vector<int> v;
	for(int i=0; i<n; i++)
	{
		cin >> k;
		v.push_back(k);
	}
	sort(v.rbegin(), v.rend());
	for(int i=0; i<m; i++)
		cout << v[i] << endl;
	return 0;
}
