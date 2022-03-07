#pragma once
#include <string>

class Author {
    private:
        std::string name;
        std::string email;
        char gender;
    public:
        Author(std::string name, std::string email, char gender) : name(name), email(email), gender(gender){}
        inline std::string getName() const { return name; }
        inline std::string getEmail() const { return email; }
        inline char getGender() const { return gender; }
        void setEmail(std::string email);
        std::string print() const;
};
