// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	int x = 0;
	char quit = 'x';
	
	while(true){
		cout<<"You've been gnomed";
		cin>>quit;
		if(quit == 'q'){
			cout<<"Get out, you owe me money!";
			break;
		}
		
		if(x == 100){
			break;
	}
	x = x + 1;
	//x++;
	}	
}
