#include <iostream>
#include <fstream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <vector>
#include <sstream>
#include <map>

void lines_with_words_containing_most(const std::string& nazwa, const char& c){
    std::ifstream plik;
    plik.open(nazwa);
    std::string line;
    std::vector<std::pair<std::pair<int,int>,std::string>> lines;
    int index = 0;
    while(getline(plik, line)){
        std::istringstream iss(line);
        std::string word;
        int cnt = 0;
        while(iss >> word){
            for(char a : word){
                if(a == c){
                    cnt++;
                    break;
                }
            }
        }
        lines.push_back({{cnt, -index}, line});
        index++;
    }
    sort(lines.begin(), lines.end());
    for(int i = 0; i < lines.size(); i++){
        if(lines[lines.size() - i - 1].first.first == lines.back().first.first){
            std::cout << lines[lines.size() - i - 1].second << std::endl;
        }
    }
}

struct eof_exception : public std::logic_error{
    const char* v;
public:
    eof_exception(const char* tekst) : std::logic_error(tekst), v(tekst){

    }

};

struct filtered_stream{
    template <typename T, typename Y>
    filtered_stream(T v, std::vector<Y> b){

    }


    auto extract_from(){

    }
};
int main() {
    lines_with_words_containing_most("heh.txt", 'x');
    auto a = eof_exception("d");
    return 0;
}
