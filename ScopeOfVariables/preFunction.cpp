#include <iostream>
using namespace std;

//Scope of variables

//Global variable are defined outside the main function
//Local variable are only defined between curly brackets

int globalVar;
int nr = 5;

main()
{
	int number,result,i;
	
	for (i = 0; i < nr;i++)
	{
		cout<<"Enter number "<<i+1<<endl;
		cin>> number;
		result += number;
	}
	cout<<result<<endl;
	cout<<"We added "<< i << " numbers"<<endl;
}
