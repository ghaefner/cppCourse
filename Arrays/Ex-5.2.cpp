#include <iostream>
using namespace std;

main()

{
	int const DIMY = 3, DIMX = 3;
	int array[DIMX][DIMY];
	int x,y;
	
	for (int i = 0;i<DIMX;i++)
	{
		for (int j = 0;i<DIMY;j++)
		array[i][j] = i + j;
	}
	
	cout<<"Which array element do you want to see?"<<endl;
	cout<<"Please input x dimension: "<<endl;
	cin>>x;
	cout<<"Please input y dimension: "<<endl;
	cin>>y;
	
	if (x>DIMX || y>DIMY)
		cout<<"Error. Index out of bounds."<<endl;
	else
		cout<<"The array element ["<<x<<"]["<<y<<"] is: "<<array[x-1][y-1]<<endl;
}
