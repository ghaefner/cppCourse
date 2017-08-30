#include <iostream>
using namespace std;

main()
{
	const int SIZEOFARRAY=4;
	double array[SIZEOFARRAY];
	double sum=0.;
    
	for (int i=0;i<SIZEOFARRAY; i++){

		cout<<"Please input the "<<i+1<<" element of the array."<<endl;
		cin>>array[i];
	
		sum += array[i];
	}
	cout<<"The sum is given by: "<<sum<<endl;
	cout<<"The address of the first entry: "<<array<<endl;
	cout<< "The address of the last entry: "<<&array[3]<<endl;
}
