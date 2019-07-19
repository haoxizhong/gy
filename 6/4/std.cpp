#include<iostream>
#include<cstring>

using namespace std;

char s1[110],s2[110];

int main()
{
	cin >> s1 >> s2;
	cout << -strcmp(s1,s2) << endl;

	return 0;
}
