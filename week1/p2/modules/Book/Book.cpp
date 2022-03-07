#include "Book.hpp"

void Book::setPrice(double price) { this->price = price; }

std::string Book::print() const {
    return "Book [ " + name 
    + ", " + author.getName()
    + ", $" + std::to_string(price)
    + " ]";
}