#include "Account.h"

Account::Account() {
    this->name = "UNFILLED_NAME";
    this->userName = "";
    this->email = "";
    this->holderName = HolderName();
    Account::numOfAccounts++;
}

Account::Account(string name, string userName, string email, HolderName holderName) {
    this->name = name;
    this->userName = userName;
    this->email = email;
    this->holderName = HolderName(holderName);
    Account::numOfAccounts++;
}

Account::~Account() {
    // TODO: Fill this up
}

void Account::setName(string name) {
    this->name = name;
};
void Account::setUserName(string userName) {
    this->userName = userName;
};
void Account::setEmail(string email) {
    this->email = email;
};
void Account::setHolderName(HolderName holderName) {
    this->holderName = holderName;
};
string Account::getName() {
    return this->name;
};
string Account::getUserName() {
    return this->userName;
};
string Account::getEmail() {
    return this->email;
};
string Account::getHolderLastName() {
    return this->holderName.getLastName();
};

int Account::numOfAccounts = 0;