#include <iostream>
using namespace std;

main()

{
	int min,max,var;
	bool interval;
	
	cout<<"Please input minimum value: "<<endl;
	cin>>min;
	cout<<"Please input maximum value: "<<endl;
	cin>>max;
	cout<<"Please input number to check: "<<endl;
	cin>>var;
	
	interval = (min <= var) && (var <= max);
	
	cout<<"Is the number "<<var<<" contained in the interval from "<<min<<" to "<<max<< " ? "<<endl;
	cout<<interval;
	
}
