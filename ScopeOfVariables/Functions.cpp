#include <iostream>
using namespace std;

//Functions or Methods have many different instructions

void welcome(){
	cout<<"Hello, welcome to the code!"<<endl;
}
//bool isNumber(string tmp);

bool isNumber(string number){
	
	if (number[0] == '0')
		return false;
			
	for (int i = 0; i<number.length();i++)
	{		
		if (!(number[i]>'0' && number[i]<='9'))
			return false;
	}
	return true;
}

void enterName(){
	
	string tmp;
	cout<<"Enter the number: "<<endl;
	cin>>tmp;
	
}

main()
{
	welcome();
	
	for (int i = 0;i<5;i++)
		enterName();
	
}
