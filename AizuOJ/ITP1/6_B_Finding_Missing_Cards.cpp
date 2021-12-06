#include <bits/stdc++.h>
using namespace std;

const int total_cards = 52;
const int card_per_type = 13;
const int total_types = 4;
const char types[total_types] = {'S', 'H', 'C', 'D'};

int main(void){
    bool card[total_cards];
    for (int i = 0; i < 52; i++) {
        card[i] = true;
    }
    
    int n;
    char type;
    int value;
  
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> type >> value;
        for (int j = 0; j < total_types; j++) {
            if (types[j] == type) {
                card[value - 1 + j * card_per_type] = false;
            }
        }
    }
  
    for (int i = 0; i < total_cards; i++) {
        if (card[i]) {
            cout << types[i / card_per_type] << " " << i % card_per_type + 1 << endl;
        }
    }
}
