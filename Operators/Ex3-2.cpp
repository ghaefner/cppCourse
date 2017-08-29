#include <iostream>
using namespace std;

main()

{
	int min,max,var;
	bool minCheck,maxCheck;
	
	cout<<"Please input minimum value: "<<endl;
	cin>>min;
	cout<<"Please input maximum value: "<<endl;
	cin>>max;
	cout<<"Please input number to check: "<<endl;
	cin>>var;
	
	minCheck = (var >= min);
	maxCheck = (var <= max);
	
	cout<<"Is the value greater or equal to the min value? "<<minCheck<<endl;
	cout<<"Is the value lower or equal to the max value? "<<maxCheck<<endl;
	
	if (minCheck == 1 and maxCheck == 1){
		cout<<"The value to check is inside the interval."<<endl;
	}
}
