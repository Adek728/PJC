#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
#include <set>
#include <stack>


void show_ordered_character_occurrences(std::string v){
    auto x = std::map<char, int>();

    for(auto i : v){
        x[i] += 1;
    }

    std::vector<std::pair <int, char>> vec;

    for(auto i : x){
        vec.push_back({i.second, i.first});
    }

    std::sort(vec.begin(), vec.end());
    std::reverse(vec.begin(), vec.end());

    for(auto entry : vec){
        std::cout << entry.second << ' ' << entry.first << '\n';
    }
}

bool has_balanced_brackets(std::string v, std::map<char, char> zamykajacy, std::map<char, char> otwierajacy) {
    std::stack<char> stos1;
    for(int i = 0; i < v.size(); i++){
        if(zamykajacy.find(v[i]) != zamykajacy.end()){
            stos1.push(v[i]);
        }else if(otwierajacy.find(v[i]) != otwierajacy.end()){
            if(!stos1.empty() and stos1.top() == otwierajacy[v[i]]){
                stos1.pop();
            }else{
                return false;
            }
        }
    }
    if(!stos1.empty()){
        return false;
    }else{
        return true;
    }
}
enum action{
    move_left = 1,
    move_right = -1,
    idle = 0
};

auto chunk(std::vector<action> vec){
    auto x = std::vector<std::vector<action>>();
    for(int i = 0; i < vec.size(); i++){
        if(i % 3 == 0){
            x.push_back({vec[i], idle, idle});
        }else{
            x[i/3][i%3] = vec[i];
        }
    }
    return x;
}

bool effectively_idle(std::vector<std::vector<action>> vec){
    for(int i = 0; i < vec.size(); i++){
        if(vec[i][0] + vec[i][1] + vec[i][2] != 0){
            return false;
        }
    }
    return true;
}

int main() {
    show_ordered_character_occurrences("dawdnadwdhawkjdhbawawjik");
    auto zamykajacy = std::map<char, char>();
    auto otwierajacy = std::map<char, char>();

    zamykajacy ['('] = ')';
    zamykajacy ['['] = ']';
    zamykajacy ['{'] = '}';
    zamykajacy ['<'] = '>';

    otwierajacy [')'] = '(';
    otwierajacy [']'] = '[';
    otwierajacy ['}'] = '{';
    otwierajacy ['>'] = '<';

    bool x = has_balanced_brackets("(<)>",zamykajacy, otwierajacy);
    std::cout << x << '\n';
    auto t = std::vector<action>{move_left, move_left, move_right};
    std::cout << effectively_idle(chunk(t));
    return 0;
}

