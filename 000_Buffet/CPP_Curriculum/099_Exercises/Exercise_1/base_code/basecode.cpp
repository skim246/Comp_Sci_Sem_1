// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	int x = 5;
	char quit = 'x';
	
	while(true){
		cout<<x<<endl;
		if(x == 25){
			break;
	}
	x = x + 1;
	//xx++;
	}
	
	cout<<endl;
	
	for(int i = 5; i <= 25; i = i + 1){
		cout<<i<<endl;
	}
	
	
	cout<<endl;


	int y = 15;
	char end = 'y';
	
	while(true){
		cout<<y<<endl;
		if(y == 5){
			break;
	}
	y = y - 1;
	//xx++;
	}
	
	cout<<endl;
	
	for(int z = 15; z >= 5; z = z - 1){
		cout<<z<<endl;
	}
}
