// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	cout<<"Please enter box width: ";
	int a; 
	cin>>a;
	
	cout<<"Please enter border character: ";
	char sym;
	cin>>sym;
	
	cout<<"Please enter box height: ";
	int b; 
	cin>>b;
	
	for(int i = 0; i < b; i++){
		for(int i = 0; i < a-1; i++){
			cout<<sym;
		}
		cout<<sym<<endl;
	}
}
