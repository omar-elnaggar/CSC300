#include "Author.hpp"

void Author::setEmail(std::string email) { this->email = email; }

std::string Author::print() const { 
    return "Author [ Name: " + this->name 
    + ", Email: " + this->email
    + ", Gender: " + this->gender
    + " ]";
}