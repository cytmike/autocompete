#include <iostream>
#include <vector>

using namespace std;

int main()
{
	string a,b,c;
	a="qwak";
	int u=0;
	b="quack";
	c="qwuack";
	string s;
	while (cin>>s)
	{
		if (s==c)
			cout<<(char)('a'+u);
		else if (s==a)
		{
			u++;
			if (u==26)
				u=0;
		}
		else if (s==b)
		{
			u--;
			if (u==-1)
				u=26;
		}
	}
	return 0;
}