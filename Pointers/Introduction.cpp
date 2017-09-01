#include <iostream>
using namespace std;

/* Pointes 
 Are ordinary variables that can store addresses of variables.
 */

int main()
{
	int var = 5, a = 20;
	/*
	cout<<"Variable = "<<*&var<<endl; //Give us the adress.
	
	//Pointers declared with asterisk * after variable type
	int *p = &var;
	
	//Return variable with * + pointer
	
	cout<<"Pointer = "<<*p<<endl;
	
	//Change of value by using the pointer
	*p = a;
	
	cout<<"Variable"<<var<<endl;
	cout<<"Pointer"<<*p<<endl;*/
	
	//Constant pointer
	int * const p_1 = &a; //Still can change the value
	const int *p_2 = &a; //Pointer, that cannot change the value that it is pointing 
	const int * const p_3 = &a; //Cannot change the value, is under adress and cant change the adress
	
	cout<<"int * const p_1 = "<<*p_1<<" , Adress: "<<p_1<<endl;
	cout<<"int const * p_2 = "<<*p_2<<" , Adress: "<<p_2<<endl;
	cout<<"int const * const p_3 = "<<*p_3<<" , Adress: "<<p_3<<endl;
	
	a = 50;
	
	cout<<"int * const p_1 = "<<*p_1<<" , Adress: "<<p_1<<endl;
	cout<<"int const * p_2 = "<<*p_2<<" , Adress: "<<p_2<<endl;
	cout<<"int const * const p_3 = "<<*p_3<<" , Adress: "<<p_3<<endl;
	
	
	
	return 0;
}
