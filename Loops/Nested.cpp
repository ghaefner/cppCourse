#include <iostream>
using namespace std;
// Loops - Exercises and Nested Loops

main()

{
	int nr = 121234139;
	int nrDigits = 1;
	int temp = nr;
	
	
	//Use the fact that dividing by 10 reduce the number of digits!	
	while(temp /= 10) //temp = temp / 10
		nrDigits++;
	
	cout<<"The number "<<nr<<" has "<<nrDigits<<" digits."<<endl;
	/*
	 Multiplication table:
	  1  2  3  4  5  6  7  8  9 10
	  2  4  6  9 10 12 14 16 18 20
	  3  6  9 12 15 18 21 24 27 30
	  4 ...
	  ...	 
	*/
	for (int i= 1;i<=14;i++){
		cout<<i<<" ";
		for (int j =1;j<=21;j++){
			cout.width(4);
			cout<< i * j;
		}
			
		cout<<endl;
	}
}
