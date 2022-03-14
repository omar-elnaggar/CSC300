#pragma once

#include <iostream>

class Project {

    private:
        char code;

    public:
        Project(char code) : code(code){}

        void display();

        friend std::ostream& operator<<(std::ostream& out, Project& me);

};