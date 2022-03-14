#include "Person.hpp"
#include <iostream>

void Person::display(){
    std::cout << "Person [ Name: " << name << std::endl;
}

std::ostream& operator<<(std::ostream& out, Person& me){
    out << me.name;
    return out;
}