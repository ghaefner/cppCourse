#include <iostream>
using namespace std;

double adding();

int main()
{
	adding();
}

double adding()
{
	int howMany;
	double sum,tmp;

	cout<<"How many numbers do you want to add?"<<endl;
	cin>>howMany;
	
	for (int i = 0; i<howMany; i++)
	{
		cout<<"Please input nr. "<<i+1<<endl;
		cin>>tmp;
		sum += tmp;
	}
	cout<<"The total sum of all number is "<<sum<<endl;
}
