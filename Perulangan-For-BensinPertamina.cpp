#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	int a,liter,premium,pertalite,pertamax;
	premium=8000;
	pertalite=10000;
	pertamax=12000;

	cout<<"input liter = ";cin>>liter;
	cout<<"------------------------------------------------"<<endl;
	cout<<"L\tPremium\t\tpertalite\tPertamax   "<<endl;
	cout<<"------------------------------------------------"<<endl;
	cout<<"------------------------------------------------"<<endl;
	
	for(a=1; a<=liter; a++)
	{
		cout<<a<<"\t"<<a*premium<<"\t""\t"<<a*pertalite<<"\t""\t"<<a*pertamax<<endl;
	}
	getch();
}
