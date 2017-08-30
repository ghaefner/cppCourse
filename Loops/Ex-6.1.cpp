#include <iostream>
using namespace std;

main()
{
	//Print out numbers
	double number;
	cout<<"Please input integer number: "<<endl;
	cin>>number;
	
	
	for (int i=number; i<=number+100;i++)
		cout<<i<<endl;
		
	//n-th power
	int n, power=1;
	cout<<"To what power should the number be raised to?"<<endl;
	cin>>n;
	
	for (int j=0;j<n;j++)
		power *= number;
	cout<<"Power: "<<power<<endl;
	
	//Factorial
	int factorial=1;
	for (int k=1;k<=n;k++)
		factorial *= k;
	cout<<factorial<<endl;


	//Asterisks
	system("clear");
	int astNr;
	cout<<"How many asterisks do you need?"<<endl;
	cin>>astNr;
	
	for (int i=1;i<=astNr;i++){
		cout<<"*";
		if (i % 5 == 0)
			cout<<endl;
	}
	
	//Odd or even?
	system("clear");
	const int ARRAYSIZE=5;
	int array[ARRAYSIZE];
	for (int i=0;i<ARRAYSIZE;i++){
		cout<<"Input number "<<i+1<<endl;
		cin>>array[i];
		if (array[i] % 2 == 0)
			cout<<"The number "<<array[i]<<" is even."<<endl;
		else
			cout<<"The number "<<array[i]<<" is odd."<<endl;
	}
	
	
}
