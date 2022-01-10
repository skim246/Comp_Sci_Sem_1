// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	cout<<"Input an equation: ";
	int x = 0;
	char joe = 'x';
	
	int a = 0;
	cin>>a;
	int b = 0;
	cin>>b;
	
	while(true){
		cin>>joe;
		if(joe == 'n'){
			break;
		}
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
		cout<<"Would you like to input another equation?"<<endl;
		char quit = 'x';
		cin>>quit;
		if (quit == 'n'){
			break;
		}
		
	}
}
