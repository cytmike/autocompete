#include <iostream>
#include <vector>

using namespace std;

int main()
{
	string s;
	while (getline(cin,s)) {
	int y=0,c=0;
	char q;
	for (int i=1;i<s.size();i++)
	{
		if (s[i]==s[i-1])
			c++;
		else
			c=0;
		if (c>y)
		{
			y=c;
			q=s[i];
		}
	}
	if (y==0)
		q=s[0];
		//cout<<s[0]<<endl;
	//else
	{
		int k=q-'a'+y+1;
		if (k>=26)
			k%=26;
		q=(char)('a'+k);
		cout<<q<<endl;
	}
	}
	return 0;
}