#include <iostream>
using namespace std;

main()
{
	char a; //Character 1 byte -128 to 127
	int b; //Integer 4 byte -2 billion to 2 billion
	short c; //Short integer 2 bytes -32768 to 32767
	float d; //Float 4 bytes up to 38 zeros
	double e; //Double 8 bytes up to 308 zeros
	
	a = 'b';
	b = 523012;
	c = 23;
	d = 2.8;
	e = 1.2458204841940458;
	
	cout << "Character: " << a << " Adress: " << &a<< endl;
	cout << "Integer: " << b << " Adress: " << &b<<endl;
	cout << "Short integer: " << c << " Adress: " << &c << endl;
	cout << "Float: " << d << " Adress: " << &d << endl;
	cout << "Double: " << e << " Adress: " << &e << endl;
	
}
