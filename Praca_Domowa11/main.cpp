#include <iostream>
#include <algorithm>
#include <vector>

template <typename Container>
auto contains_all(Container first, Container second){
    sort(first.begin(), first.end());
    sort(second.begin(), second.end());

    return includes(
            first.begin(), first.end(),
            second.begin(), second.end()
            );
}


namespace pjc{

    template <typename U>
    auto swap(U& x, U& y){
        std::swap(x, y);
    }

}

template<typename T>
struct container_wrapper : std::vector<T>{
    std::vector<T> vec;

    container_wrapper(std::vector<T>){

    }

    template<typename Cont>
    auto add_all(const Cont& cont){
        for(const T& element : cont){
            vec.push_back(element);
        }
    }

    template<typename Cont>
    auto remove_all(const Cont& cont){
        for(const T& element : cont){
            auto it = find(vec.begin(), vec.end(), element);
            while(it != vec.end()){
                vec.erase(it);
                it = find(vec.begin(), vec.end(), element);
            }
        }
    }

    void show(){
        for(auto i : vec){
            std::cout << i << ' ';
        }
        std::cout << std::endl;
    }
};
int main() {
    auto x = std::vector<int>{1,2,2,3,4,5,6};
    auto z = std::vector<int>{1,2};
    std::cout << contains_all(x,z) << std::endl;
    auto n = 1;
    auto b = 7;
    pjc::swap(n,b);
    std::cout << n << ' ' << b << std::endl;
    auto vec = container_wrapper<int>({});
    vec.add_all(x);
    vec.remove_all(z);
    vec.show();
    return 0;
}
