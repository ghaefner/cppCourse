#include <iostream>
using namespace std;

void swap(int &, int &);

int main()	
{
	int a, b;
	cout<<"Input two number: "<<endl;
	cin>>a>>b;
	
	swap(a,b);

	return 0;
}

void swap(int &a, int &b)
{
	int t;
	
	//Swap a and b.
	t = a;
	a = b;
	b = t;
	cout<<"a = "<<a<<" , b = "<<b<<endl;
}
