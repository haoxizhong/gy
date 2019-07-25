#include<iostream>
#include<algorithm>

using namespace std;

int n,m,z[100010];

int main()
{
	cin >> n >> m;
	for (int a=1;a<=n;a++)
		cin >> z[a];
	for (int a=1;a<=m;a++)
	{
		int p1,p2;
		cin >> p1 >> p2;
		swap(z[p1],z[p2]);
	}
	for (int a=1;a<=n;a++)
		cout << z[a] << (a==n ? '\n' : ' ');

	return 0;
}
