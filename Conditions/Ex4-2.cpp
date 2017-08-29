#include <iostream>
using namespace std;

main()
{
	int choice;
	
	cout<<"------------------------------------"<<endl;
	cout<<"Chose one of the following items:"<<endl;
	cout<<"1 - Coffee"<<endl;
	cout<<"2 - Cappucino"<<endl;
	cout<<"3 - Latte Macciato"<<endl;
	cout<<"4 - Espresso"<<endl;
	cout<<"5 - Chocolate Milk"<<endl;
	cout<<"6 - Green Tea"<<endl;
	cout<<"------------------------------------"<<endl;
	
	cin>>choice;

	cout<<"You have chosen a ";
	
	
	switch(choice)
	
	{
		case 1:
			cout<<"Coffee."<<endl;
			break;
		case 2:
			cout<<"Cappucino."<<endl;
			break;
		case 3:
			cout<<"Latte Macciato."<<endl;
			break;
		case 4:
			cout<<"Espresso."<<endl;
			break;
		case 5:
			cout<<"Chocolate Milk."<<endl;
			break;
		case 6:
			cout<<"Green Tea."<<endl;
			break;
		default:
			cout<<"Error. Invalid choice."<<endl;
			break;
	}	
}
