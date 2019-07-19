#include<iostream>

using namespace std;

int z[110];

int main()
{
	int minv=0x3f3f3f3f;
	int n;
	cin >> n;
	for (int a=1;a<=n;a++)
	{
		cin >> z[a];
		if (z[a]<minv) minv=z[a];
	}
	cout << minv << endl;
	for (int a=1;a<=n;a++)
		z[a]=z[a]-minv;
	for (int a=1;a<=n;a++)
		cout << z[a] << (a==n ? '\n' : ' ');

	return 0;
}
