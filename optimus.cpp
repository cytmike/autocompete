#include <iostream>
#include <vector>

using namespace std;

bool ip(int n)
{
	for (int i=3;i*i<=n;i+=2)
		if (n%i==0)
			return 0;
	return 1;
}

bool pa(int n)
{
	vector<int> d;
	while (n>0)
	{
		d.push_back(n%10);
		n/=10;
	}
	for (int i=0;i<d.size();i++)
		if (d[i]!=d[d.size()-i-1])
			return 0;
	return 1;
}

int main()
{
	int a;
	cin>>a;
	//int z[100]={0};
	vector<int> z;
	if (a==1)
	{
		cout<<2<<endl;
		return 0;
	}
	z.push_back(2);
	//z.push_back(2);
	//z[1]=2;
	//int u=2;
	for (int i=3;i<143787342;i+=2)
	{
		//if (i>10000000)
		//	cout<<i<<endl;
		if (pa(i) && ip(i))
		{
			//cout<<i<<endl;
			z.push_back(i);
		if (z.size()==a)
		{
			cout<<i<<endl;
			break;
		}
		}
	}
	//cout<<z[a]<<endl;
	return 0;
}