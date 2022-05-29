//
// Created by user on 30.05.2021.
//

#ifndef PRACA_DOMOWA9_OPERATIONS_HPP
#define PRACA_DOMOWA9_OPERATIONS_HPP
namespace models {
    namespace predicates {
        std::string is_adult(const student& s) {
            if (s.getAge() < 18) {
                return s.getName() + ' ' + s.getSurname() + " is not adult" + '\n';
            }else{
                return s.getName() + ' ' + s.getSurname() + " is adult" + '\n';
            }
        }
    }
    namespace mappers {
        std::string display(const student& s) {
            return s.getName() + ' ' + s.getSurname() + ' ' + std::to_string(s.getAge());
        }
    }
}
#endif //PRACA_DOMOWA9_OPERATIONS_HPP
