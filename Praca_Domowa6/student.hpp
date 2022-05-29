//
// Created by user on 18.05.2021.
//

#ifndef PRACA_DOMOWA6_STUDENT_HPP
#define PRACA_DOMOWA6_STUDENT_HPP
#include <algorithm>
struct student {
    std::string name;
    std::string surname;
    int age;

    student(std::string n, std::string s, int a) {
        name = n;
        surname = s;
        age = a;


    }

    student() {
        age = 0;


    }

    student(const student& other) {
        name = other.name;
        surname = other.surname;
        age = other.age;


    }

    void operator=(student other) {
        name = other.name;
        surname = other.surname;
        age = other.age;
    }

    ~student() {

    }

    static int name_comparator(const student& left, const student& right){
         if(left.name < right.name){
             return 2;
         }else if(left.name > right.name){
             return 0;
         }
         return 1;
    }

    static int surname_comparator(const student& left, const student& right){
        if(left.surname < right.surname){
            return 2;
        }else if(left.surname > right.surname){
            return 0;
        }
        return 1;
    }

    static int age_comparator(const student& left, const student& right){
        if(left.age < right.age){
            return 2;
        }else if(left.age > right.age){
            return 0;
        }
        return 1;
    }

    static bool comparator(const student& left, const student& right) {
        if (name_comparator(left, right) == 2) {
            return true;
        } else if (name_comparator(left, right) == 0) {
            return false;
        } else {
            if (surname_comparator(left, right) == 2) {
                return true;
            } else if (surname_comparator(left, right) == 0) {
                return false;
            } else {
                if (age_comparator(left, right) == 2) {
                    return true;
                }
                return false;
            }
        }
    }
};
#endif //PRACA_DOMOWA6_STUDENT_HPP
