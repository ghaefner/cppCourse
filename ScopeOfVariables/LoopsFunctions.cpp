#include <iostream>
using namespace std;

void initMenu();
void menuDecision(int);
double areaCircle(double);
double areaSquare(double);
double areaRect(double, double);
double areaTriangle(double, double);

int main()
{
	int choice;
	char cont='y';
	
	do {
		
		system("clear");
		initMenu();

		cin >> choice;
	
		menuDecision(choice);
		
		cout<<"Do you want to continue the program? (Y/N)"<<endl;
		cin>> cont;
		
	}while (cont == 'y' || cont == 'Y');

	return 0;
}

void initMenu()
{
	cout<<"--------------------"<<endl;
	cout <<"Enter option: "<<endl;
	cout <<"1. Circle"<<endl;
	cout<<"2. Square"<<endl;
	cout<<"3. Rectangle"<<endl;
	cout<<"4. Triangle"<<endl;
	cout<<"--------------------"<<endl;	
}	

void menuDecision(int choice)
{
	double r, a ,b ,c, g, h;
	
	switch(choice)
	{
		case 1: 
			cout<<"Enter the radius: "<<endl;
			cin>>r;
			areaCircle(r);
			break;
		case 2:
			cout<<"Enter the edge length of the square: "<<endl;
			cin>>a;
			areaSquare(a);
			break;
		case 3:
			cout<<"Enter the length of the edges of the rectangle: "<<endl;
			cin>>b>>c;
			areaRect(b,c);
			break;
		case 4:
			cout<<"Enter the legnth of the base edge and the height of the triangle: "<<endl;
			cin>>g>>h;
			areaTriangle(g,h);
			break;
		default:
			cout<<"You didn't choose any of the options from above."<<endl;
	}
}

double areaCircle(double r)
{
	double result = 3.1415 * r *r;
	
	cout<<"The area of the circle is: "<<result<<endl;
}	

double areaSquare(double a)
{
	double result = a * a;
	
	cout<<"The area of the square is: "<<result<<endl;
}	

double areaRect(double b, double c)
{
	double result = b * c;
	
	cout<<"The area of the rectangle: "<<result<<endl;
}

double areaTriangle(double g, double h)
{
	double result = 0.5 * g * h;
	
	cout<<"The area of the triangle is: "<<result<<endl;
}
