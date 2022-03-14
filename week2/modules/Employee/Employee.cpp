#include "Employee.hpp"

void Employee::display(){
    std::cout << "Employee [ ID: " << id << ", " << project << " ]";
}

std::ostream& operator<<(std::ostream& out, Employee& me){
    out << "Employee [ Name: " << (Person&)me <<  ", ID: " << me.id << ", " << me.project << " ]";
    return out;
}