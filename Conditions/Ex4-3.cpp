#include <iostream>
using namespace std;

main()
{
	int monthNr;
	int year;
	
	cout<<"Type in the number of the month: "<<endl;
	cin>>monthNr;
	cout<<"What year is it?"<<endl;
	cin>>year;
	
	switch(monthNr){
		case 1:
			cout<<"Janurary has 31 days."<<endl;
			break;
		case 2:
			if (year % 4 == 0)
			{ 
				cout <<"Februray in a leap year has 29 days."<<endl;
			}
			else
				cout<<"Februray in a regular year has 28 days."<<endl;
			break;
		case 3:
			cout<<"March has 31 days."<<endl;
			break;
		case 4:
			cout<<"April has 30 days."<<endl;
			break;
		case 5:
			cout<<"May has 31 days."<<endl;
			break;
		case 6:
			cout<<"June has 30 days."<<endl;
			break;
		case 7:
			cout<<"July has 31 days."<<endl;
			break;
		case 8:
			cout<<"August has 31 days."<<endl;
			break;		
		case 9:
			cout<<"September has 30 days."<<endl;
			break;				
		case 10:
			cout<<"October has 31 days."<<endl;
			break;				
		case 11:
			cout<<"November has 30 days."<<endl;
			break;	
		case 12:
			cout<<"December has 31 days."<<endl;
			break;	
		default:
			cout<<"Not a valid month nr."<<endl;
	}
}
