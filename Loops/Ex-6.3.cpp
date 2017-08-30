#include <iostream>
using namespace std;

main()
{
	int nr,sum;
	cout<<"Please input an integer number."<<endl;
	cin>>nr;
	
	for (int i=0;i<=nr;i++){
		if (i % 2 == 1)
			continue;
		else
			sum += i;
	}
	cout<<"The sum of all even number up to "<<nr<<" is "<<sum<<endl;
	
	
	system("clear");
	
	int sumNew=0,count=0;
	char yesOrNo;
	for (;;)
	{
		cout<<"The current value is "<<sumNew<<endl;
		cout<<"Do you want to add "<<++count<<" ? (Y/N)"<<endl;
		cin>>yesOrNo;
		
		if (yesOrNo == 'y' || yesOrNo == 'Y')
			{
				sumNew += count;
			}
		else if (yesOrNo == 'n' || yesOrNo == 'N')
			continue;
		else
			break;
		
	}

}
