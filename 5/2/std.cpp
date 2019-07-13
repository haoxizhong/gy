#include<iostream>

using namespace std;

int main()
{
	long long x,cnt=0;
	cin >> x;
	while (x!=1)
	{
		if (x%2==1) x=x*3+1;
		else x=x/2;
		cnt += 1;
	}
	cout << cnt << endl;

	return 0;
}
