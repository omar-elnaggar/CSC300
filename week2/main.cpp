#include <iostream>

#include ".\modules\Person\Person.hpp"
#include ".\modules\Project\Project.hpp"
#include ".\modules\Employee\Employee.hpp"

using namespace std;

int main(){

    Employee omar("Omar El Naggar", 'm', 6745);
    cout << omar << endl;

    return 0;
}