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
	
	int x = a;
	int y = b;
	
	for(int i = 0; i < b; i++){
		for(int i = 0; i < a-1; i++){
			cout<<sym;
		}
		cout<<sym<<endl;
		
		gotoxy(x+1,y+1);
		cout<<" "<<endl;
	}
}
