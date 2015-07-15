#include <string>
#include <vector>
#include <stdlib.h>
#include <iostream>

using namespace std;

class card{
public:
	card(int v, string c):value(v), color(c), chosen(false){}
    void show(){
        cout << color << " " << value << endl;
    }
//private:
	int value;
	string color;
	bool chosen;
};

class deck{
public:
	deck(){
		string arr_color[4] = {"spade", "heart", "club", "dimond"};
		for(int k = 0; k < 4; ++k)
			for(int i = 1; i <= 13; ++i)
				v_card.push_back(card(i, arr_color[k]));
		v_card.push_back(card(0, "big king"));
		v_card.push_back(card(0, "small king"));
	}
	void shuffle();
	void reset(){
		for(auto i : v_card)
			i.chosen = false;
	}
//private:
	vector<card> v_card;
};

void deck::shuffle(){
    srand(time(NULL));
    for(int i = 0; i < 53; i++){
          int swap_idx = i+1 + rand() % (53-i);
          swap(v_card[i], v_card[swap_idx]);
    }
}
