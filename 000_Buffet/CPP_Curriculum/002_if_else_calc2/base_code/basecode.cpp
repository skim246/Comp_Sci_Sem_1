// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	cout<<"Please enter a first number:"<<endl;
	int a = 0;
	cin>>a;
	
	cout<<"Please enter a second number:"<<endl;
	int b = 0;
	cin>>b;
	
	cout<<"Please enter an operation (+,-,/,*):"<<endl;
	char joe;
	cin>>joe;
	if(joe == '+')
	{
		int c = a + b;
		cout<<a<<"+"<<b<<"="<<c<<endl;
	}
	else if(joe == '-')
	{
		int c = a - b;
		cout<<a<<"-"<<b<<"="<<c<<endl;
	}
	else if(joe == '/')
	{
		int c = a/b;
		cout<<a<<"/"<<b<<"="<<c<<endl;
	}
	else
	{
		int c = a*b;
		cout<<a<<"*"<<b<<"="<<c<<endl;
	}
}

