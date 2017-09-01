#include <iostream>
using namespace std;

main()
{
	int a = 50;
	int *p = &a;
	int **pp = &p;
	cout<<"BEFORE:"<<endl;
	cout<<"a = "<<a<<" , Adress: "<<&a<<endl;
	cout<<"p = "<<*p<<" , Adress: "<<p<<endl;
	cout<<"pp = "<<**pp<<" , Adress: "<<*pp<<endl;	
	
	a = 20;
	
	cout<<"AFTER:"<<endl;
	cout<<"a = "<<a<<" , Adress: "<<&a<<endl;
	cout<<"p = "<<*p<<" , Adress: "<<p<<endl;
	cout<<"pp = "<<**pp<<" , Adress: "<<*pp<<endl;		
}
