#include<iostream>

using namespace std;

int n,z[110][110];

int main()
{
	cin >> n;
	for (int a=1;a<=n;a++)
		for (int b=1;b<=n;b++)
			cin >> z[b][a];
	for (int a=1;a<=n;a++)
		for (int b=1;b<=n;b++)
			cout << z[a][b] << (b==n?'\n':' ');

	return 0;
}
