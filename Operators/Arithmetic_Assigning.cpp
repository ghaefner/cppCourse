#include <iostream>
using namespace std;

//Operators

main()
{
    int a = 10;
    int b = 6;
    int c=1, d=1,e=2,f=4;

    //Arithmetic Operators
    cout << "Sum of a and b = "<< a + b << endl; //Addition
    cout << "Difference of a and b = "<< a - b << endl; //Subtraction
    cout << "Product of a and b = " <<a * b << endl; //Multiplication
    cout << "Integer division of a and b = " <<a / b << endl; //Division
    cout << "Remainder of integer division of a and b = " << a % b << endl; //Modulus - Returns the remainder.

    //Incrementation
    c += 1; //Assisgnment operator: it is the same as c = c+1.
    d -= 1;
    e /= 1;
    f *= 2;

    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    cout << f << endl;

    //Post-Incrementation
    cout << c++ << endl;
    //Pre-Incrementation
    cout << ++c << endl;
    //Post-Decrementation
    cout << d-- << endl;
    //Pre-Decrementation
    cout << --d << endl;


}
