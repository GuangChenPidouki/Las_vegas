#include <vector>
#include "card.h"
#include <iostream>

using namespace std;

class game{
public:
    game(deck *deck):cur_deck(deck){}
	void first_show();
private:
    vector<card> my_card;
    deck *cur_deck;
};

void game::first_show(){
    cout << "first show:" << endl;
    for(int i = 0; i < 5; i++){  
        cur_deck->v_card[i].show();
    }
}
