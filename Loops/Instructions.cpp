#include <iostream>
using namespace std;

main()

{ 
	for (int i = 1; i<= 25; i++) //Amount of rows
	{
	
	if (i==5)
		continue; //Everything after conitnue instruction wont be executed
				  //But loop keeps on
				  
	if (i==20)		//Everything after break instruction wont be executed
					//We are leaving the actual loop
		break;
		
		for (int j = 1; j<=5; j++) //Amount of columns
		{
			cout.width(4);
			cout << i * j;
		}
		cout << endl;
	}
	
	cout<<"Test."<<endl;
	
}

