#include<iostream>

using namespace std;

int z[110];

int main()
{
	int minv=0x3f3f3f3f;
	int n;
	cin >> n;
	for (int a=1;a<=n;a++)
		cin >> z[a];
	for (int l=1,r=n;l<=r;l++,r--)
	{
		int v=z[l];
		z[l]=z[r];
		z[r]=v;
	}

	for (int a=1;a<=n;a++)
		cout << z[a] << (a==n ? '\n' : ' ');

	return 0;
}
