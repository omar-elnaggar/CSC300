#include "..\Student\Student.hpp"

class UndergraduateStudent : public virtual Student {
    private:
        std::string rank;
    public:
        UndergraduateStudent(std::string name, std::string rank) : Student(name), rank(rank) {}

        inline std::string getRank() const { return rank; }

        void setRank(std::string rank);

        std::string print() const override;
};