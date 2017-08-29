#include <iostream>
using namespace std;

//Switches are used to switch between cases due to the value of variable

main()
{
	//Can only use integer and character variables in switch.
	char x='d';
	
	switch (x)
	{
		case 'd':
			cout << "This is a place for the instructions if x = 0."<<endl;
			break;
		case 25:
			cout << "This a place for the instructions if x = 25."<<endl;
			break;
		case 50:
			cout << "This is a place for the instructions if x = 50."<<endl;
			break;
		default:
			cout << "This is a default place."<<endl;
			break;
	}
	

}
