#include<iostream>

using namespace std;

int z[110];

int main()
{
	int n=0,v;
	cin >> v;
	while (v!=0)
	{
		n++;
		z[n]=v%10;
		v=v/10;
	}
	for (int a=1;a<=n;a++)
		printf("%d",z[a]);
	printf("\n");

	return 0;
}
