#include <iostream>
using namespace std;

main()
{
	int a,b;
		
	cout << "Enter number a: "<<endl;
	cin >> a;
	
	cout << "Enter number b: "<<endl;
	cin >> b;	
		
		
	cout << "This program adds 10 the highest input number"<<endl;
	
	//Condition ? Then we write what will be assigned: Instruction.
	
	string message = (a > b) ? "a > b": "a <=b";

	cout << ((a>b ? a :b) + 10) << endl;
	
	
	
}
