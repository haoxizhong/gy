#include<iostream>

using namespace std;

int n,z[110];

int main()
{
	cin >> n;
	for (int a=1;a<=n;a++)
		cin >> z[a];
	for (int a=1;a<=n;a++)
		for (int b=a+1;b<=n;b++)
			if (z[a]>z[b])
			{
				int v=z[a];
				z[a]=z[b];
				z[b]=v;
			}
	for (int a=1;a<=n;a++)
		cout << z[a] << (a==n ? '\n' : ' ');

	return 0;
}
