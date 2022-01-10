// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	cout<<"Please enter present box width: ";
	int x;
	cin>>x;
	cout<<"Please enter present box height: ";
	int y; 
	cin>>y;
	
	cout<<"    <>   "<<endl;
	cout<<"    **   "<<endl;
	cout<<"   ****   "<<endl;
	cout<<"  ******  "<<endl;
	cout<<" ******** "<<endl;
	cout<<"**********"<<endl;
	cout<<"    []    "<<endl;
	cout<<"~~~~~~~~~~"<<endl;
	
	for(int j = 0; j < 4; j++){
		for(int i = 0; i < 5; i++){
			gotoxy(i+15,j+5);
			cout<<"#";
		}
		cout<<"#"<<endl;
	}
	gotoxy(17,4);
	cout<<"~~";
	
	cout<<" "<<endl;

	for(int j = 0; j < y; j++){
		for(int i = 0; i < x; i++){
			gotoxy(i+25,j+5);
			cout<<"%";
		}
		cout<<"%"<<endl;
	}
	
	for(int i = 0; i < 7; i++){
		gotoxy(12,i+4);
		cout<<"*"<<endl;
		sleep(1);
		gotoxy(12,i+4);
		cout<< ' ' <<endl;
	for(int i = 0; i < 5; i++){
		gotoxy(23,i+2);
		cout<<"*"<<endl;
		sleep(1);
		gotoxy(23,i+2);
		cout<< ' ' <<endl;
	}
	for(int i = 0; i < 5; i++){
		gotoxy(31,i+1);
		cout<<"*"<<endl;
		sleep(1);
		gotoxy(31,i+1);
		cout<< ' ' <<endl;
	}
	}
}


