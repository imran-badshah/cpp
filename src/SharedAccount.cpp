#include "SharedAccount.h"

SharedAccount::SharedAccount(string name, string userName, string email, HolderName holderName, HolderName sharedHolderName) : 
Account(name, userName, email, holderName) {
    this->sharedHolderName = sharedHolderName; 
}

SharedAccount::~SharedAccount() {
    // TODO: Fill this up
}

void SharedAccount::setSharedHolderName(HolderName sharedHolderName) {
    this->sharedHolderName = sharedHolderName;
}

string SharedAccount::getSharedHolderLastName() {
    return this->sharedHolderName.getLastName();
};
