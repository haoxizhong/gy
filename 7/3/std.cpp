#include<iostream>

using namespace std;

int n;

int main()
{
	cin >> n;
	if (n<2) cout << "no" << endl;
	else
	{
		for (int a=2;a*a<=n;a++)
			if (n%a==0)
			{
				cout << "no" << endl;
				return 0;
			}
		cout << "yes" << endl;
	}

	return 0;
}
