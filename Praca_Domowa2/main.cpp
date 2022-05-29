#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
    auto get_rid_of(std::vector<int> v, int to_remove){
    v.erase(to_remove);
    return v;
}
void modify(std::vector<int> v, std::string a){

    if(a == "append"){
        int liczba;
        std::cout << "Podaj liczbe, ktora zostanie dodana: " << std::endl;
        std::cin >> liczba;
        v.push_back(liczba);
    }
    if(a == "truncate"){
        v.pop_back();
    }
    if(a == "reverse"){
    std::reverse(v.begin(), v.end());
    }
    for(int i : v){
        std::cout << i << " ";
    }
    std::cout << "\n";
}
void modify(std::vector<int> v){
    modify(v, "reverse");
}
void count_chars(std::vector<char> v, char a){
    int x = 0;
    for(int i : v){
        if(i == a){
            x++;
        }
    }
    if(x == 1){
        std::cout << "Podany znak wystapil raz" << std::endl;
    }else if(x == 0){
     std::cout << "Podany znak nie wystapil" << std::endl;
    }else{
        std::cout << "Podany znak wystapil " << x << " razy" << std::endl;
    }
}
void count_chars(std::string v, char a){
    int x = 0;
    for(int i : v){
        if(i == a){
            x++;
        }
    }
    if(x == 1){
        std::cout << "Podany znak wystapil raz" << std::endl;
    }else if(x == 0){
        std::cout << "Podany znak nie wystapil" << std::endl;
    }else{
        std::cout << "Podany znak wystapil " << x << " razy" << std::endl;
    }
}
void box_print(std::vector<std::string> a){

    int x = 0;

    for(int i = 0; i < a.size(); i++){

        for(int j = 0; j < a[i].size(); j++){
            x = (a[i].size() + 2) * (a.size() + 2);
        }
    }
    std::vector<std::string> strings;
    for (int i = 0; i < x; i++){
        strings.push_back("*");
    }
    for(int i = 0; i < strings.size(); i++){
        std::cout << strings[i];
        if(i % (a[i].max_size() + 2) == 0){
            std::cout << "\n";
        }
    }

}

int main() {
    using namespace std;
    vector<int> tablica = {1, 2, 3, 5};
    get_rid_of(tablica, 3);
    vector<char> text = {'a', 'b', 'd', 'e', 't', 'a'};
    modify(tablica, "append");
    modify(tablica, "truncate");
    modify(tablica, "reverse");
    modify(tablica);
    count_chars(text, 'h');
    count_chars("hhhhhhe", 'h');
    auto ramka = vector<string>{"Helfelo", "world", "in", "a", "frame"};
    box_print(ramka);

    return 0;
}
