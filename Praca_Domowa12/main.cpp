#include <iostream>
#include <vector>



template<typename T>
struct matrix{
    std::vector<std::vector<T>> vec;
    int m;
    int n;

    matrix(int m, int n){

    }

    int getM() const {
        return m;
    }

    void setM(int m) {
        matrix::m = m;
    }

    int getN() const {
        return n;
    }

    void setN(int n) {
        matrix::n = n;
    }

    auto transpose(){
        std::vector<std::vector<T>> ret;
        ret.resize(m);
        for(int i = 0; i < m; i++)
            ret[i].resize(n);
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                ret[i][j] = vec[j][i];
            }
        }
        return ret;
    }       //M = M.transpose()

    void operator[](const matrix& x){
        return *x;
    }

};

namespace pjc{
    namespace string_operators{

        template<typename T, typename U>
        void operator*(T x, U y){

        }

        template<typename T, typename U>
        void operator-(T x, U y){

        }

        template<typename T, typename U>
        void operator*=(T x, U y){

        }

        template<typename T, typename U>
        void operator-=(T x, U y){

        }

        template<typename T, typename U>
        void operator/(T x, U y){

        }

    }

}


int main() {
    auto x = matrix<int>(2,3);
    return 0;
}
