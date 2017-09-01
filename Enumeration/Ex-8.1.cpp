#include <iostream>
using namespace std;

main()
{
	string name = "Lisa";
	
	string &Lisi = name;
	string &Lisbeth = name;
	string &Lili = name;
	
	cout<<name<<" "<<&name<<endl;
	cout<<Lisi<<" "<<&Lisi<<endl;
	cout<<Lisbeth<<" "<<&Lisbeth<<endl;
	cout<<Lili<<" "<<&Lili<<endl;
}
