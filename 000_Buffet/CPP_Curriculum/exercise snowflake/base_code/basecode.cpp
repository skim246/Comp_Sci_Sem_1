// base code file
#include "./hfiles/poole.h"
#include <thread>
///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	cout<<"Please enter a snowflake symbol: ";
	char snow;
	cin>>snow;
	
for(int i = 0; i < 10; i++){
		gotoxy(8,i+4);
		cout<<snow<<endl;
		sleep(1);
		gotoxy(8,i+4);
		cout<< ' ' <<endl;
	}
}	


