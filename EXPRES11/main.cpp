#include <iostream>
#include <stack>

using namespace std;

int main()
{
	const int maxe = 100000;
	char buf[maxe];
	int n;
	cin >> n;
	while(n-- >= 0)
	{
		char c;
		stack<char> exp;
		cin.get();
		while(cin.get(c) && c != '\n')
		{

			switch(c)
			{
				case '(':
				case '[':
				case '{':
					exp.push(c);	
				break;
				case ')':
				case ']':
				case '}':
					if(exp.top() == c)
						exp.pop();
				break;
			}
		}
		cout << (exp.empty() ? 'S' : 'N');
	}
	return 0;
}
