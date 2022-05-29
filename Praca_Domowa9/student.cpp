//
// Created by user on 30.05.2021.
//

#include "student.hpp"
namespace models {
    student::student(const std::string& name, const std::string& surname, const int& age)
            : name(name), surname(surname), age(age) {}

    student::student() {}

    void set_all(student& s, std::string name, std::string surname, int age){
        s.setName(name);
        s.setSurname(surname);
        s.setAge(age);
    }

    const std::string& student::getName() const {
        return name;
    }

    void student::setName(const std::string& name) {
        student::name = name;
    }

    const std::string& student::getSurname() const {
        return surname;
    }

    void student::setSurname(const std::string& surname) {
        student::surname = surname;
    }

    const int& student::getAge() const {
        return age;
    }

    void student::setAge(int& age) {
        student::age = age;
    }
}
