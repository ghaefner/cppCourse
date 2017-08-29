#include <iostream>
using namespace std;

main()
{
		
	double Var1, Var2;
	
	beginning:
	system("clear");
	cout << "Enter first Number: "<<endl;
	cin >> Var1;
	
	cout << "Enter second Number: "<<endl;
	cin >> Var2;
	
	cout << "What operation do you want to chose?"<<endl;
	cout << "+: Addition"<<endl;
	cout << "-: Subtraction"<<endl;
	cout << "*: Multiplication"<<endl;
	cout << "/: Division"<<endl;
	
	char op;
	cin >> op;	
	
	switch(op)
	
	{
		
		// Cases have to be in single paranthesis ''
		case '+':
			cout << Var1 << " + " << Var2 << " = " << (Var1 + Var2) << endl;
			break;
			
		case '-':
			cout << Var1 << " - " << Var2 << " = " << (Var1 - Var2) << endl;
			break;
			
		case '*':
			cout << Var1 << " * " << Var2 << " = " << (Var1 * Var2) << endl;
			break;	
			
		case '/':
		
		if (Var2 == 0)
			cout << "Math Error: Can't divide by zero."<<endl;
		else
			cout << Var1 << " / " << Var2 << " = " << (Var1 / Var2) << endl;
			break;	
	
		default:
			cout << "No valid operation chosen."<<endl;
	
	}
	char yon;
	
	cout << "Do you want to continue? (Y/N)"<<endl;
	cin >> yon;
	
	if (yon == 'y' || yon == 'Y')
		goto beginning;
	
}
