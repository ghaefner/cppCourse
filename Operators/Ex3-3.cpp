#include <iostream>
using namespace std;

main()
{
	//Exercise 1
	
	system("clear");
	
	double length;
	cout<<"Input a length in inches: "<<endl;
	cin>>length;
	
	cout<<length<< " inches are equal to ";
	cout<<(length*2.54)<<"cm."<<endl;

	//Exercise 2
	
	double temp;
	
	cout<<"Input a temperature in celsius degrees: "<<endl;
	cin>>temp;
	cout<<"Temperature in Celsius: "<<temp<<endl;
	cout<<"Temperature in Fahrenheit: "<<(temp*1.8+32)<<endl;
	cout<<"Temperature in Kelvin: "<<(temp-273.13)<<endl;
	
	//Exercise 3-7
	
	double Num1,Num2;
	cout<<"Input Number 1: "<<endl;
	cin>>Num1;
	cout<<"Input Number 2: "<<endl;
	cin>>Num2;
	
	cout<<"The numbers to perform the operations on are: "<<Num1<<" and "<<Num2<<" ."<<endl;
	cout<<"Sum: "<<(Num1+Num2)<<endl;
	cout<<"Difference: "<<(Num1-Num2)<<endl;
	cout<<"Product: "<<(Num1*Num2)<<endl;
	cout<<"Division: "<<(Num1/Num2)<<endl;
	//cout<<"Remainder: "<<(Num1 % Num2)<<endl;

}
