#include <iostream>
#include "card.hpp"
#include "operations.hpp"
#include <vector>
#include <cstdlib>
auto sorted(vector<card> v, comparing_by x){
}
auto get_max(vector<card> v, comparing_by x){

}

auto get_min(vector<card> v, comparing_by x){

}
int main() {
    using namespace std;
    card c1 = {(rand()% 20) + 1, "grdgs", "napis", (rand() % 30) + 1, (rand() % 100) + 1};
    card c2 = {(rand()% 20) + 1, "sgrrs", "napis", (rand() % 30) + 1, (rand() % 100) + 1};
    card c3 = {(rand()% 20) + 1, "grdvd", "napis", (rand() % 30) + 1, (rand() % 100) + 1};
    card c4 = {(rand()% 20) + 1, "fhtyfgj", "napis", (rand() % 30) + 1, (rand() % 100) + 1};
    card c5 = {(rand()% 20) + 1, "awd", "napis", (rand() % 30) + 1, (rand() % 100) + 1};
    card c6 = {(rand()% 20) + 1, "fgyjk", "napis", (rand() % 30) + 1, (rand() % 100) + 1};
    card c7 = {(rand()% 20) + 1, "qrtbv", "napis", (rand() % 30) + 1, (rand() % 100) + 1};
    card c8 = {(rand()% 20) + 1, "aers", "napis", (rand() % 30) + 1, (rand() % 100) + 1};
    card c9 = {(rand()% 20) + 1, "hytr", "napis", (rand() % 30) + 1, (rand() % 100) + 1};
    card c10 = {(rand()% 20) + 1, "32q", "napis", (rand() % 30) + 1, (rand() % 100) + 1};
    vector<card> cards = {c1, c2, c3, c4, c5, c6, c7, c8, c9, c10};
    get_all_cards(cards);
    get_sample_hands(2, cards);

    //kompletnie nie wiedziałem jak zabrać się za te zadania.
    return 0;
}
