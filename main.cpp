#include <iostream>

using namespace;

int main(){
	//init
	cout << "Welcome to Las Vegas!" << endl;
	cout << "1: PLAY" << endl;
	cout << "2: QUIT" << endl;
	int option = getchar();
	while(option != '1' and option != '2'){
		cout << "PRESS 1 or 2" << endl;
		option = getchar();
	}
	if(option == '2'){
		cout << "DON'T YOU REALLY WANT TO TRY ONCE? BYE~" << endl;
		return 0;
	}
	do{
		cout << "GAME BEGIN!" << endl;
		cout << "PRESS ANY KEY TO DRAW CARD" << endl;
		cout << "CURRENT SCORE:" << endl;
		cout << "1: CONTINUE" << endl;
		cout << "2: QUIT" << endl;
		getchar();
		while(option != '1' and option != '2'){
			cout << "PRESS 1 or 2" << endl;
			option = getchar();
		}
		if(option == '2'){
			cout << "DON'T YOU REALLY WANT TO TRY MORE? BYE~" << endl;
			return 0;
		}
	}while(option == '1')
}