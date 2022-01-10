// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	cout<<"yeah we are starting c++"<<endl;
	gotoxy(1,1+4);
	cout<<"%";
	gotoxy(2,2+4);
	cout<<"%";
	gotoxy(3,3+4);
	cout<<"%";
	gotoxy(4,4+4);
	cout<<"%";
	gotoxy(5,5+4);
	cout<<"%";
	
	for(int i = 1; i < 11; i++){
		gotoxy(i,i+4);
		cout<<'&'<<endl;
	}
}
