// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	char sym;
	cout<<"Please enter the symbol: ";
	cin>>sym; 
	
	int x; 
	cout<<"Please enter line length: ";
	cin>>x;
	
	string direct; 
	cout<<"horizontal or vertical: ";
	cin>>direct;

	int i;	
	for(i = 0;i < x; i++){
		if(direct == "horizontal"){
			cout<<sym;
		}
		else{
			cout<<sym<<endl;
	}
	}
	
}
