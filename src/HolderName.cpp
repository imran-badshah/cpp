#include "HolderName.h"

HolderName::HolderName() {
    this->firstName = "";
    this->middleName = "";
    this->lastName = "";
}

HolderName::HolderName(string firstName, string middleName, string lastName) {
    this->firstName = firstName;
    this->middleName = middleName;
    this->lastName = lastName;
}

HolderName::~HolderName() {
    // TODO: Fill this up
}

void HolderName::setFirstName(string firstName) {
    this->firstName = firstName;
};
void HolderName::setMiddleName(string middleName) {
    this->middleName = middleName;
};
void HolderName::setLastName(string lastName) {
    this->lastName = lastName;
};
string HolderName::getFirstName(){
    return this->firstName;
};
string HolderName::getMiddleName(){
    return this->middleName;
};
string HolderName::getLastName(){
    return this->lastName;
};