#include <iostream>
using namespace std;

void setValue(int &);

main()
{
	int variable = 10;
	cout<<setValue(variable)<<endl;
	
}

void setValue(int &variableToSet)
{
	cout<<"Please input an integer number."<<endl;
	cin>>variableToSet;
}
