#include <iostream>
using namespace std;

main()
{
	//First Way of Syntax
	const int SIZEOFARRAY = 10;
	int i = 0;
	int array[SIZEOFARRAY];
	
	while (i < SIZEOFARRAY){
		array[i] = 10*i;
		cout<<array[i++]<<endl;
	}

	//do --- while loop:
	int j = 1;
	do
	{
		cout<<"Test."<<endl;
		j++;
	} while(j<10);

}
