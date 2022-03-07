#include "..\Student\Student.hpp"

class GraduateStudent : public virtual Student {
    private:
        std::string project;
    public:
        GraduateStudent(std::string name, std::string project) : Student(name), project(project){}

        inline std::string getProject() const { return project; }

        void setProject(std::string project);

        std::string print() const override;
};