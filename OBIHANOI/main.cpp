#include <iostream>
using namespace std;

int main()
{
	int n, test = 0;
	while(cin >> n && n != 0)
		cout << "Teste " << ++test << endl << (1 << n)-1 << endl << endl;
	return 0;
}
