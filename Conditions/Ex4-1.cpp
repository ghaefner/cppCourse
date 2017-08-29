#include <iostream>
using namespace std;

main()
{
	int age;
	cout<<"What is your age?"<<endl;
	cin>>age;
	
	if (age >= 18)
		cout<<"You are an adult."<<endl;
	else if (age < 18)
		cout<<"You are not an adult."<<endl;
		
		
	int points;
	cout<<"Enter your number of points in the exam."<<endl;
	cin>>points;
	if (points >= 100 || points <= 0){
		cout<<"ERROR. The number of points is invalid."<<endl;
	}
	else 
	{
		if (points >= 50)
			cout<<"Congratulations! You passed the exam."<<endl;
		else if (points <50)
		cout<<"You did not pass the exam."<<endl;
	}
		
		
	
	
}
