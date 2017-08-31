#include <iostream>
using namespace std;

enum dayOfWeek{Mo = 1,Tu,We,Th,Fr,Sa,Su}; //dayOfWeek is now a type of variable!

string getDay(dayOfWeek);

int main()
{
	dayOfWeek d = Mo;
	
	cout<<getDay(d)<<endl;
	
	return 0;
}

string getDay(dayOfWeek d)
{
	switch(d)
	{
		case Mo:
			return "Monday";
		case Tu:
			return "Tuesday";
		case We:
			return "Wednesday";
		case Th:
			return "Thursday";
		case Fr:
			return "Friday";
		case Sa:
			return "Saturday";
		case Su:
			return "Sunday";
		default:
			return "You typed in an invalid day";
	}
}
