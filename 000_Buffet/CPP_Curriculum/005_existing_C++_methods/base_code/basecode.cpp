// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	cout<<"Please enter the symbol: ";
	char sym; 
	cin>>sym;
	
	cout<<"Please enter the length: ";
	int x;
	cin>>x;
	
	cout<<"Please enter h for horizontal, or v for vertical, or d for diagonal: ";
	string direction;
	cin>>direction;
	
	int i;	
	for(i = 1;i < x + 1; i++){
		if(direction == "h"){
			cout<<sym;
		}
		else if(direction == "v"){
			cout<<sym<<endl;
		}
		else{
			gotoxy(i,i+4);
			cout<<sym<<endl;
		}
	}
}
