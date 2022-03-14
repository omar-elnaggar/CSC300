#pragma once

#include "..\Person\Person.hpp"
#include "..\Project\Project.hpp"

class Employee : public virtual Person {
    private:
        Project project;
        int id;
    public:
        Employee(std::string name, char pCode, int i) : Person(name), project(pCode), id(i){}

        void display();

        friend std::ostream& operator<<(std::ostream& out, Employee& me);
};