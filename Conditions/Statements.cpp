#include <iostream>

using namespace std;

//Conditional Statements

main()
{
	int a,b;
	
	cout << "Enter integer a: "<<endl;
	cin >> a;
	
	cout << "Enter integer b: "<<endl;
	cin >> b;

	cout << "This only is printed, if" << endl;	
	
	if (a > b)
	{
		cout << a << " > " << b<<endl;
	}
		
	else if (a < b)
	{
		cout<<a<<" < "<<b<<endl;
	}
}
