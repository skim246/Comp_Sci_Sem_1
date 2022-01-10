// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	cout<<"Please enter box width: ";
	int a;
	cin>>a;
	
	cout<<"Please enter border char: ";
	char sym; 
	cin>>sym;
	
	cout<<"Please enter box height: ";
	int b;
	cin>>b;
	
	cout<<"Please enter box x coordinate: ";
	int x;
	cin>>x;
	
	cout<<"Please enter box y coordinate: ";
	int y;
	cin>>y;

	for(int j = 0; j < b; j++){
		for(int i = 0; i < a; i++){
			gotoxy(x+i,y+j);
			cout<<sym;
		}
	}
}