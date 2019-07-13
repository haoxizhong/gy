#include<iostream>

using namespace std;

int main()
{
	int sum=0,minv=1e+9,maxv=-1e+9;
	int n;
	cin >> n;
	for (int a=1;a<=n;a++)
	{
		int v;
		cin >>v;
		sum+=v;
		if (v<minv) minv=v;
		if (v>maxv) maxv=v;
	}
	cout << sum << endl << maxv << endl<< minv <<endl;

	return 0;
}
