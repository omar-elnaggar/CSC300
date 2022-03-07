#include "GraduateStudent.hpp"

void GraduateStudent::setProject(std::string project){ this->project = project; }

std::string GraduateStudent::print() const { 
    return "Graduate Student [ " 
    + this->getName() + ", "
    + this->project
    + " ]"; 
}