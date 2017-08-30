#include <iostream>
using namespace std;

main()

{
	const int XDIM = 5, YDIM =5;
	int array[XDIM][YDIM];
	int counter=1;
	
	for (int i = 0; i<XDIM;i++)
	{
		for (int j =0; j<YDIM;j++)
		{
			array[i][j] = counter++;
			cout.width(5);
			cout<<array[i][j];
			if (array[i][j] % XDIM == 0)
				cout<<endl;
		}
	}
	
	int xCoord,yCoord;
	
	cout<<"Please input x coordinate:"<<endl;
	cin>>xCoord;
	cout<<"Please input y coordinate:"<<endl;
	cin>>yCoord;
	cout<<"The array element ["<<xCoord<<"]["<<yCoord<<"] is "<<array[xCoord-1][yCoord-1]<<endl;
	

}
