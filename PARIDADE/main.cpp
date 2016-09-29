#include <iostream>
#include <string>
#include <bitset>

using namespace std;

int main()
{
	unsigned int n;
	while(cin >> n && n != 0)
	{
		bitset<32> bits(n);
		string res;
		if(bits.count() != 0) {
			res = bits.to_string();
			size_t f = res.find('1');
			if(f != string::npos) res.erase(0, f);
		}	
		cout << "The parity of " << res  << " is " << bits.count() << " (mod 2)." << endl;
	}
	return 0;
}
