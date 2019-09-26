#include <iostream>

using namespace std;

int main()
{
	string a,b;
	getline(cin,a);
	getline(cin,b);
	cout<<"Knock knock.\nWho's there?\n";
	cout<<a<<endl;
	//a.erase(a.size()-1,1);
	cout<<a<<" who?\n";
	cout<<b<<endl;
	return 0;
}