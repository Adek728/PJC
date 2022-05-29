//
// Created by user on 09.05.2021.
//

#ifndef PRACA_DOMOWA5_CARD_HPP
#define PRACA_DOMOWA5_CARD_HPP
#include <string>
#include <vector>
using namespace std;
struct card{
    int cost;
    string name;
    string description;
    int attack;
    int toughness;
};
auto get_all_cards(vector<card> cards){
    for(auto card : cards){
        cout << card.name << " cost: " << card.cost << ' '  <<
        ' ' << card.description << " attack: " <<
        card. attack << " toughness: " << card.toughness << '\n' ;
    }
}
auto get_sample_hands(int p, vector<card> v){
    for(int i = 0; i < p; i++){
        cout << endl;
        for(auto card : v){
            cout << card.name << " cost: " << card.cost << ' '  <<
                  ' ' << card.description << " attack: " <<
                  card. attack << " toughness: " << card.toughness << '\n' ;
        }
    }

}

#endif //PRACA_DOMOWA5_CARD_HPP
