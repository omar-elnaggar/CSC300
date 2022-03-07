#pragma once
#include <string>

class Student {
    private:
        std::string name;
    public:
        Student(std::string name) : name(name){}

        inline std::string getName() const {return name;}

        void setName(std::string name);

        virtual std::string print() const;
};