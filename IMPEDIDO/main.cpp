#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int atacante, natacantes, ndefensores;
	while(cin >> natacantes >> ndefensores && !(natacantes == 0 && ndefensores == 0))
	{
		cin >> atacante;
		for(int c, i = 1; i<natacantes; i++)
		{
			cin >> c;
			if(c < atacante)
				atacante = c;
		}
		vector<int> defensores(ndefensores);
		for(int i = 0; i<ndefensores; i++)
		{
			cin >> defensores[i];
		}
		if(ndefensores > 1)
		{
			sort(defensores.begin(), defensores.end());
			cout << ((atacante < defensores[1]) ? 'Y' : 'N') << endl;
		} else
			cout << 'Y';

	}
	return 0;
}
