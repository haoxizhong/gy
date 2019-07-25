#include<iostream>
#include<algorithm>

using namespace std;

int n,z[100010];

int main()
{
	cin >> n;
	for (int a=1;a<=n;a++)
		cin >> z[a];
	sort(z+1,z+n+1);
	for (int a=1;a<=n;a++)
		cout << z[a] << (a==n ? '\n' : ' ');

	return 0;
}
