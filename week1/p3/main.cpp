#include ".\modules\Student\Student.hpp"
#include ".\modules\GraduateStudent\GraduateStudent.hpp"
#include ".\modules\UndergraduateStudent\UndergraduateStudent.hpp"

#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<Student*> students;
    
    Student patrick("Patrick Monahan");
    GraduateStudent kelsey("Kelsey Travis", "Impact of Government Regulation on the Linen Industry");
    UndergraduateStudent trevor("Trevor Moore", "Freshman");

    students.push_back(&patrick);
    students.push_back(&kelsey);
    students.push_back(&trevor);

    for (Student* student : students){
        cout << student->print() << endl;
    }

    return 0;
}
