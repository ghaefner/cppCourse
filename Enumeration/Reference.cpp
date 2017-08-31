#include <iostream>
using namespace std;

//Reference Variable

int main()

{
	string name = "Agi";
	
	cout<<"Name is: "<<name<<" . Adress is: "<<&name<<endl;
	
	//Use ampersand to declare reference variable
	string &nr6 = name;
	
	nr6 = "Ina";
	
	cout<<nr6<<endl;
	cout<<name<<endl;
	
	return 0;

}

/*
 Reference variable be initialized when created.
 Reference variable can't change associations / connections.
 Reference variables must be the same type as associated variable.
 
 */
