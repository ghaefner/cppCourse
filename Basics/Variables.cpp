#include <iostream>
using namespace std;

//Variables

main()
{
    //Have to declare the type of variable!
    //Need type of variable and name of variable
    int A;
    A = 4; //Assigning values to variables is called initialization!
    //We are allocating space for the variable that is an integer.

    //Adress variable via 'ampersand' &

    cout<<A<<endl;
    cout <<&A<<endl;

    A = 10;

    cout<<A<<endl;
    cout<<&A; //Adress doesn't change, even though the value has changed.
}

/*
Naming variables:
    1. Variables can't have the same name.
    2. Variables can't start with a number.
    3. We can't use spaces but underscores instead.
    4. Variables should be self-descriptive.
    5. We can't use special characters or key words.
    6. Variables should be nouns.
*/

void varibales()
{
    int a,b,c;

}
