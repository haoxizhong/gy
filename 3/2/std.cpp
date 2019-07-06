#include<iostream>

using namespace std;

int main()
{
	int a,b,c;
	cin >> a >>b>>c;
	int v=a;
	if (b<v) v=b;
	if (c<v) v=c;
	cout << v<< endl;

	return 0;
}
