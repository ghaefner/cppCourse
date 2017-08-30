#include <iostream>
using namespace std;

const int ARRAYSIZE = 5;

double minValue(double array[]);
double maxValue(double array[]);

int main()
{
	//Initialize Array
	double userArr[ARRAYSIZE];
	
	for (int i = 0; i<ARRAYSIZE; i++)
	{
		cout<<"Please input array element nr. "<<i+1<<endl;
		cin>>userArr[i];
	}
	
	cout<<"The minimum value in the array is "<<minValue(userArr)<<endl;
	cout<<"The maximum value in the array is "<<maxValue(userArr)<<endl;
}


double minValue(double array[ARRAYSIZE])
{
	double temp = array[0];
	for (int i = 1; i<ARRAYSIZE; i++)
		if (temp > array[i])
			temp = array[i];
	return temp;
}


double maxValue(double array[ARRAYSIZE])
{
	double temp = array[0];
	for (int i = 1; i<ARRAYSIZE; i++)
		if (temp < array[i])
			temp = array[i];
	return temp;
}
