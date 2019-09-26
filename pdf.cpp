#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
	unordered_map<string,string> v;
	string s;
	while (getline(cin,s)) {
		bool var=0;
		for (int i=0;i<s.size();i++) 
			if (s[i]=='=')
			{
				var=1;
				//cout<<s.substr(0,i)<<endl;
				//cout<<s.substr(i+1)<<endl;
				v[s.substr(0,i)]=s.substr(i+1);
			}
		if (!var) {
			for (int i=0;i<s.size();i++)
				if (s[i]!='%')
					cout<<s[i];
				else 
				{
					int j=i+1;
					for (j=i+1;j<s.size();j++)
						if (s[j]=='%')
							break;
					if (j==i+1)
					{
						cout<<'%';
						i=j;
						continue;
					}
					//cout<<"***"<<s.substr(i+1,j-i-1)<<endl;
					cout<<v[s.substr(i+1,j-i-1)];
					//cout<<v[]
					i=j;
				}
			//cout<<s<<endl;
				cout<<endl;
		}
	}
	//cout<<v["verb"];
	return 0;
}