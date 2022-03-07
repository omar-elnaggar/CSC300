#include "Student.hpp"

void Student::setName(std::string name){ this->name = name; }

std::string Student::print() const{ return "Student [ " + this->name + " ]"; }