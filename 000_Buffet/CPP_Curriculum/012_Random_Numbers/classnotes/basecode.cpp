// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	while(kbhit()==0){
			gotoxy(5,5);
			//char x = getch();
			// cin>>x;
			cout<<random(9);
			
	}
	
}
