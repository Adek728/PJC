#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
int main() {
    using namespace std;
    cout << "Zadanie 1\n";
    cout << 123 + 321 << endl;
    cout << (123 & 321) << endl;
    cout << (123 | 321) << endl;  // 2 i 3 przykład z nawiasami, ponieważ to operatory logiczne (bład przy endl)
    cout << "Zadanie 2/\n";
    cout << "Podaj 1 slowo: \n";
    cout << "Podaj 2 slowo: \n";
    cout << "Podaj 3 slowo: \n";
    string slowo1;
    string slowo2;
    string slowo3;
    cin >> slowo1;
    cin >> slowo2;
    cin >> slowo3;
    vector<string> slowa = {slowo1, slowo2, slowo3};
    sort(slowa.begin(), slowa.end());
    for (string x : slowa) {
        cout << x << ' ';
    }
    cout << "\n";
    cout << "Zadanie 3\n";

    int liczba;
    string slowo;
    string liczby;
    string wszystko;

    cout << "Podaj liczbe: " << '\n';
    while (true) {
        cin >> liczba;
        if (liczba < 0) {
            cout << "Niepoprawna liczba\n";
            break;
        }
        liczby += to_string(liczba) + " ";

    }

    cout << "Wprowadz slowa:" << '\n';
    while (true) {
        cin >> slowo;
        if (slowo == "exit") {
            cout << "Niepoprawne slowo\n";
            break;
        }
        wszystko += slowo + " ";
    }
    cout << wszystko << endl;
    for (int i = liczby.length() - 1; i >= 0; i--) {
        cout << liczby.at(i);
    }
    cout << "\n";
    for (int i = 0; i < wszystko.length(); i++) {
    cout << wszystko.at(i);
    }
    return 0;
}
