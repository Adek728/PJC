//
// Created by user on 30.05.2021.
//

#ifndef PRACA_DOMOWA9_STUDENT_HPP
#define PRACA_DOMOWA9_STUDENT_HPP

#include <string>

namespace models {
    struct student {
    private:
        std::string name;
        std::string surname;
        int age;
    public:
        const std::string& getName() const;

        void setName(const std::string &name);

        const std::string& getSurname() const;

        void setSurname(const std::string& surname);

        const int& getAge() const;

        void setAge(int& age);

        student(const std::string& name, const std::string& surname, const int& age);

        student();

        friend void set_all(student& s, std::string name, std::string surname, int age);

    };
}
#endif //PRACA_DOMOWA9_STUDENT_HPP
