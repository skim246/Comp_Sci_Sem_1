// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	cout<<"Please enter line length: ";
	int a;
	cin>>a;
	
	cout<<"Please enter line symbol: ";
	char sym;
	cin>>sym;
	
	cout<<"Please enter line x coordinate: ";
	int x; 
	cin>>x;
	
	cout<<"Please enter line y coordinate: ";
	int y;
	cin>>y;
	
	
	for(int i = 0; i < a; i++){
		gotoxy(x+i,y);
		cout<<sym;
		}
}
