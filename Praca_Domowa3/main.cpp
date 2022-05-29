#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

auto contains_needle(string a, string b) {
    auto x = search(a.begin(), a.end(), b.begin(), b.end());
    if (x == a.end()) {
        return false;
    } else {
        return true;
    }
}

auto contains_all(vector<int> a, vector<int> b){
    auto x = search(a.begin(), a.end(), b.begin(), b.end());
    if(x == a.end()){
        return false;
    }else{
        return true;
    }
}

auto exchange_boundaries(vector<int> a){
    swap(*max_element(a.begin(), a.end()), *min_element(a.begin(), a.end()));
    return a;
}

auto copy_by_pushing(vector<int> v, int n, int p){
    copy(v.begin(), v.begin() + n, v.begin() + p);
    return v;
}

auto translate_to_Kwiatkovsky(string a){
    replace(a.begin(), a.end(), 'r', 'l');
    replace(a.begin(), a.end(), 'R', 'L');
    return a;
}

int main() {
    cout << contains_needle("bar t", "rab") << endl;
    cout << contains_all({1, 2, 3}, {3, 2, 1}) << endl;
    vector<int> z = {1, 2, 3, 22, 6, 10};
    for(int i : exchange_boundaries(z)) cout << i << ' '; cout << '\n';
    auto result = copy_by_pushing({0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, 3, 5);
    for(int i : result) cout << i << ' '; cout << '\n';
    cout << translate_to_Kwiatkovsky("Rabarbar");
    return 0;
}
