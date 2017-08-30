#include <iostream>
using namespace std;

main()
{
	int pinNr,pinCheck,counter=5;
	cout<<"Please enter a 4-6 digit pin."<<endl;
	cin>>pinNr;
	
	while (pinCheck != pinNr){
	//system("clear");
	cout<<"What is your pin?"<<endl;
	cin>>pinCheck;
		if (pinCheck > 999999 || pinCheck < 1000){
			cout<<"ERROR. Digit number not valid."<<endl;
			continue;
			}
		else
		{
			if (pinCheck == pinNr)
				cout<<"Your pin is correct!"<<endl;
		}
		if (counter > 1)
			cout<<"You have "<<--counter<<" tries left."<<endl;
		else if (counter == 1){
			cout<<"Failed. You tried 5 times and failed. Please contact the support."<<endl;
			break;
		}
	}
}
