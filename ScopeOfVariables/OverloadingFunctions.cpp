#include <iostream>
using namespace std;

int power(int, int);
int main()
{
	int a,b;
	cin>>a>>b;
	cout << power(a, b)<<endl;
	cout << power(b, a)<<endl;
	
	return 0;
}

int power(int base, int exp)
{
	int localBase = base;
	while (exp > 1)
	{
		base = localBase * base;
		exp--;
	}

	return base;
}
