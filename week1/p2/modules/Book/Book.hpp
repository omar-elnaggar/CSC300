#pragma once
#include "..\Author\Author.hpp"
#include <string>

class Book {
    private:
        std::string name;
        Author author;
        double price;
    public:
        Book(std::string name, Author author, double price) : name(name), author(author), price(price){}
        inline std::string getName() const { return name; }
        inline Author getAuthor() const { return author; }
        inline double getPrice() const { return price; }
        void setPrice(double price);
        std::string print() const;
};
