#pragma once

#include <iostream>
#include <string>

class Person {
    private:
        std::string name;

    public:
        Person(std::string n): name(n){}

        virtual void display();

        friend std::ostream& operator<<(std::ostream& out, Person& me);
};