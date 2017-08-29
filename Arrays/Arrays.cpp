#include <iostream>
using namespace std;

//Arrays

main()
{
	int arr[3]; //Create an array via ArrayName[Size]
				//Size of the array must be defined before running (can't take it from the user)
	
	arr[0] = 10;
	arr[1] = 110;
	arr[2] = 240;
	
	/*
	 Hexadecimal-System: 0 1 2 3 4 5 6 7 8 9 a b c d e f
	 e.g.: (12a) = 1 * 16^2 + 2 * 16^1 + a * 16^0 = 298	 
	 */
	
	cout<<"array [0] = "<<arr[0]<< ", Adress: "<<&arr[0]<<endl;
	cout<<"array [1] = "<<arr[1]<< ", Adress: "<<&arr[1]<<endl;
	cout<<"array [2] = "<<arr[2]<< ", Adress: "<<&arr[2]<<endl;
	
	if (&arr[0] == arr)
		cout<<"That's true!"<<endl;
	
}
