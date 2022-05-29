#include <iostream>
#include <vector>
#include <string>
#include "student.hpp"
#include "loud_int.hpp"
int main() {
    auto s1 = student("Denryk", "Kowalski", 1);
    auto s2 = student("Adamaw", "Cickiewicz", 24);
    auto s3 = student("Branek", "Bickiewicz", 27);
    auto s4 = student("Branek", "Bickiewicz", 1);
    auto s5 = student("Franek", "Adamczyk", 1);
    auto s6 = student("Eordian", "Mickiewicz", 1);
    auto students = std::vector<student>();
    students.push_back(s1);
    students.push_back(s2);
    students.push_back(s3);
    students.push_back(s4);
    students.push_back(s5);
    students.push_back(s6);
    sort(students.begin(), students.end(), student::age_comparator);
    for(auto i : students){
        std::cout << i.name << ' ' << i.surname << ' ' << i.age << '\n';
    }

    return 0;
}
