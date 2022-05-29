//
// Created by user on 18.05.2021.
//

#ifndef PRACA_DOMOWA6_LOUD_INT_HPP
#define PRACA_DOMOWA6_LOUD_INT_HPP
#include <vector>
#include <algorithm>
#include <ctime>

struct loud_int{
    int value;

    loud_int(){
        value=0;
        std::cout << "tworzy loud_int bez zadnych wartosci" <<
                  " value=0 po to aby int nie pokazywal innej wartosci" << '\n';
    }

    loud_int(int v){
        value = v;
        std::cout << "tworzy loud_int z dana wartoscia v" << '\n';
    }

    loud_int(const loud_int& other){
        value = other.value;
        std::cout << "kopiuje i przypisuje wartosc" << '\n';
    }

    void operator=(const loud_int& other){
        value = other.value;
        std::cout << "kopiuje i nadpisuje wartosc" << '\n';
    }

    ~loud_int(){
        std::cout << "usuwa dany loud_int z pamieci" << '\n';
    }

    int getValue() const {
        return value;
    }

    public: static void setValue(int value) {
        value = value;
    }

    std::vector<loud_int> make_louder(std::vector<int> v){
        std::vector<loud_int> result(v.size());
        for(int i =0; i < v.size(); i++){
            result[i] = loud_int(v[i]);
        }
        return result;
    }

    static bool comparator(const loud_int& left, const loud_int& right){
        return left.getValue() < right.getValue();
    }
};
void test_sorting() {
    std::vector<loud_int> toSort(20);
    for (int i = 0; i < 20; i++) {
        toSort[i] = loud_int(rand() % 101);
    }
    std::cout << "a0" << '\n';
    std::sort(toSort.begin(), toSort.end(), loud_int::comparator);
    std::cout << "a0" << '\n';
    for (const auto& i : toSort) {
        std::cout << i.getValue() << ' ';
    }
    std::cout << '\n';
}
/*na poczatku 20 razy tworzy loud_int bez zadnej wartosci (60 linijka)
tworzy loud_inta z losowa wartoscia po czym kopiuje ja do vectora i po zamknieciu klamry usuwa
 tak 20 razy (linijka 61-63)
kupiuje i nadpisuje tyle razy loud_inta aby posortowac to w odpowiedni sposob, oczywiscie
po zakonczeniu jednego procesu usuwa dany loud_int
 60 linijka - 20 razy loud_int()
 61-63 - 20 razy loud_int(losowa wartosc), 20 razy nadpisuje loud_inta oraz 20 razy usuwa z pamieci

 65 w zaleznosci od sortowania uzywa nadpisywania i usuwania z pamieci   */

#endif //PRACA_DOMOWA6_LOUD_INT_HPP
