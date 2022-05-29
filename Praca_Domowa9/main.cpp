#include <iostream>
#include <vector>
#include <string>
#include "student.hpp"
#include "operations.hpp"
auto fill_range(const std::vector<int>& vec, int x, int y){
    auto v = std::vector<int>(vec.size());
    v[0] = x;
    for(int i = 1; i < vec.size(); i++){
        v[i] = vec[i] + y;
    }
    return v;
}


int main() {
    auto stud = models::student("Adam", "Mickiewicz", 31);
    std::cout << models::predicates::is_adult(stud);
    std::cout << models::mappers::display(stud);
    auto x = std::vector<int>{5, 10, 20, 30, 40};
    std::cout << std::endl;
    for(auto i : fill_range(x, 5, 10)){
        std::cout << i << ' ';
    }
    return 0;
}
