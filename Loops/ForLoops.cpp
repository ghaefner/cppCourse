#include <iostream>
using namespace std;

//For Loops

/* Syntax: for (##;##;##) where 
 * ## = initialization
 * ## = condition
 * ## = increment/decrement
 */
 
main()
{
	int sizeArray = 10;
	int arr[sizeArray];
	
	for (int i = 0; i<sizeArray; i++){
		arr[i] = i*i;		//Assign before printing
	}
	
	for (int i = 0; i<sizeArray; i++){
		cout<<arr[i]<<endl;
	}
}

