#include <iostream>
using namespace std;

double addition();
double subtraction();
double multiplication();
double division();
double exponential();
char chooseOp(char);

int main()
{
	system("clear");
	
	char decision='Y',choice;
	
	cout<<"Welcome to this calculator!"<<endl;
	
	do{
		cout<<"What calculation do you wish to perform?"<<endl;
		cin>>choice;
		chooseOp(choice);
		cout<<"Do you want to continue? (Y/N)"<<endl;
		cin >> decision;
	}while (decision == 'Y' || decision == 'y');
}


double addition()
{
	double nr1,nr2;
	cout<<"----------Addition----------"<<endl;
	cout<<"Please enter the first number: "<<endl;
	cin>>nr1;
	cout<<"Please enter the second number: "<<endl;
	cin>>nr2;
	
	cout<<nr1<<" + "<<nr2<<" = "<<nr1+nr2<<endl;
	cout<<"-----------------------------"<<endl;
}

double subtraction()
{
	double nr1,nr2;
	cout<<"----------Subtraction----------"<<endl;
	cout<<"Please enter the first number: "<<endl;
	cin>>nr1;
	cout<<"Please enter the second number: "<<endl;
	cin>>nr2;
	
	cout<<nr1<<" - "<<nr2<<" = "<<nr1-nr2<<endl;
	cout<<"-----------------------------"<<endl;
}

double multiplication()
{
	double nr1,nr2;
	cout<<"----------Multiplication----------"<<endl;
	cout<<"Please enter the first number: "<<endl;
	cin>>nr1;
	cout<<"Please enter the second number: "<<endl;
	cin>>nr2;
	
	cout<<nr1<<" * "<<nr2<<" = "<<nr1*nr2<<endl;
	cout<<"-----------------------------"<<endl;
}

double division()
{
	double nr1,nr2;
	cout<<"----------Division----------"<<endl;
	cout<<"Please enter the first number: "<<endl;
	cin>>nr1;
	cout<<"Please enter the second number: "<<endl;
	cin>>nr2;
	
	cout<<nr1<<" / "<<nr2<<" = "<<nr1/nr2<<endl;
	cout<<"-----------------------------"<<endl;
}

double exponential()
{
	double base;
	int exponent;
	cout<<"----------Exponential----------"<<endl;
	cout<<"Please enter the basis: "<<endl;
	cin>>base;
	cout<<"Please enter the exponent: "<<endl;
	cin>>exponent;
	
	double oldBase = base;
	int oldExponent = exponent;
	while(exponent>1)
	{
		base = base * oldBase;
		exponent--;
	}
	cout<<oldBase<<" to the power "<<oldExponent<<" = "<<base<<endl;
	cout<<"-----------------------------"<<endl;
}

char chooseOp(char ch)
{
    switch(ch)
    {
        case '+':
            addition();
            break;
        case '-':
            subtraction();
            break;
        case '*':
            multiplication();
            break;
        case '/':
            division();
            break;
        case '^':
            exponential();
            break;
    }
}

