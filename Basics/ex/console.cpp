#include <iostream>
using namespace std;

main()
{
	string a1, a2, a3;
	int firstNr, secondNr, tempCon;
	
	cout <<"First Task: Stringception"<<endl<<endl;
	cout <<"Input 1st string: "<< endl;
	cin >> a1;
	cout <<"Inpute 2nd string: "<<endl;
	cin >> a2;
	cout <<"Input 3rd string: "<<endl;
	cin >> a3;
	
	cout << a1 << a2 <<a3 << endl << endl;
	
	cout <<"Second Task: Integers"<<endl;
	
	cout << "Input first number: ";
	cin >> firstNr;
	cout <<"Input second number: ";
	cin >> secondNr;
	
	tempCon = firstNr;
	firstNr = secondNr;
	secondNr = tempCon;
	
	cout << "After exchange, the first number is: " << firstNr << endl;
	cout << "The second number is: " << secondNr<<endl;



}
