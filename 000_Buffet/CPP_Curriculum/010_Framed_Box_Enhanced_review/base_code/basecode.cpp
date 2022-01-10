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
	char border;
	cin>>border;
	
	cout<<"Please enter box height: ";
	int b;
	cin>>b;
	
	cout<<"Please enter box x coordinate: ";
	int x;
	cin>>x;
	
	cout<<"Please enter box y coordiante: ";
	int y;
	cin>>y; 
	
	for(int i = 0; i < b; i++){
		gotoxy(x,y);
		for(int i = 0; i < a - 1; i++){
			cout<<border;
		}
		cout<<border<<endl;
	}

}
