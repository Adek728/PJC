#include <iostream>
#include <vector>

struct shape{
    std::string rodzaj_figury;

    shape(std::string figura) : rodzaj_figury(figura){}

    virtual double get_area() const = 0;

    virtual double get_perimeter() const = 0;

    virtual void print_shape_info() const  = 0;
};

struct rectangle : shape {
private:
    int width;
    int height;
public:
    rectangle(std::string figura, int w, int h) : shape(figura), width(w), height(h){

    }

    double get_area() const override{
        auto x = width * height;
        return x;
    }

    double get_perimeter() const override {
        auto x = (2 * width) + (2 * height);
        return x;
    }

    void print_shape_info() const override{
        std::cout << "Pole prostokatu wynosi: " << get_area() << '\n';
        std::cout << "Obwod prostokatu wynosi: " << get_perimeter() << '\n';
    }
};

struct circle : shape {
private:
    int radius;
public:
    circle(std::string figura, int r) : shape(figura), radius(r){

    }


    double get_area() const override {
        auto x = 3.14 * radius * radius;
        return x;
    }

    double get_perimeter() const override {
        auto x = 2 * 3.14 * radius;
        return x;
    }

    void print_shape_info() const override{
        std::cout << "Pole okregu wynosi: " << get_area() << '\n';
        std::cout << "Obwod okregu wynosi: " << get_perimeter() << '\n';
    }
};

struct triangle : shape {
private:
    int height;
    int base;
    //jest to trojkat rownoboczny dlatego obwod 3 * base
public:
    triangle(std::string figura, int h, int b) : shape(figura), height(h), base(b){

    }

    double get_area() const override {
        auto x = (base * height) / 2;
        return x;
    }

    double get_perimeter() const override {
        auto x = 3 * base;
        return x;
    }

    void print_shape_info() const override{
        std::cout << "Pole trojkota wynosi: " << get_area() << '\n';
        std::cout << "Obwod trojkota wynosi: " << get_perimeter() << '\n';
    }
};

struct collector {
    virtual void collect(const char to_collect) = 0;
};


struct string_collector : collector{
    std::string a;

    string_collector() {};

    std::string representation(){
        return a;
    }

    string_collector(std::string a) : a(a){

    }

private:
    void collect(const char to_collect) override {
        a += to_collect;
    };

};

struct vector_collector : collector{
    std::vector<char> a;

    vector_collector() {};

    std::vector<char> representation(){
        return a;
    }

private:
    void collect(const char to_collect) override {
        a.push_back(to_collect);
    };

};

struct reverse_string_collector : string_collector{
    reverse_string_collector() {};
};

struct reverse_vector_collector : vector_collector{
    reverse_vector_collector() {};

};




std::vector<char> filter_hyphens_from(std::vector<char> v){
    std::vector<char> x;
    for(int i = 0; i < v.size(); i++){
        if(v[i] != '-'){
            x.push_back(v[i]);
        }
    }
    return x;
}
void collect_using(const collector& v){

}

int main() {
    auto vector = std::vector<char>{
            'a', '-', 'l', '-', '-', 'a', '-',
            ' ', '-',
            'm', 'a',
            '-', ' ', '-',
            '-', 'k', '-', '-', 'o', 't', '-', 'a', '-', '-'
    };
    auto str_collector = string_collector();
    //filter_hyphens_from(vector).collect_using(str_collector);
    std::cout << '\n' << str_collector.representation() << '\n';


    auto x = circle("a", 6);
    const auto s1 = circle("okrag", 5);
    auto s2 = triangle("f", 5, 6);
    auto s3 = rectangle("f", 9, 6);
    s1.print_shape_info();
    s2.print_shape_info();
    s3.print_shape_info();
    x.print_shape_info();
    return 0;
}
