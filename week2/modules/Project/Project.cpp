#include "Project.hpp"

void Project::display(){
    std::cout << "Project [ Code: " << code << std::endl;
}

std::ostream& operator<<(std::ostream& out, Project& me){
    out << "Project [ Code: " << me.code << " ]";
    return out;
}