#include "UndergraduateStudent.hpp"

void UndergraduateStudent::setRank(std::string rank){ this->rank = rank; }

std::string UndergraduateStudent::print() const { 
    return "Undergraduate Student [ " 
    + this->getName() + ", "
    + this->rank
    + " ]";
}