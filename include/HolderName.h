#ifndef HOLDERNAME_H
#define HOLDERNAME_H

#include <string>

using namespace std;

// TODO: Make this a struct
class HolderName {
    private:
        string firstName;
        string middleName;
        string lastName;

    public:
        void setFirstName(string firstName);
        void setMiddleName(string middleName);
        void setLastName(string lastName);
        string getFirstName();
        string getMiddleName();
        string getLastName();
    
    HolderName();
    HolderName(string firstName, string middleName, string lastName);
    ~HolderName();
};

#endif
