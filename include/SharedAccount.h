#ifndef SHAREDACCOUNT_H
#define SHAREDACCOUNT_H

#include "Account.h"

class SharedAccount : public Account {
    private:
        HolderName sharedHolderName;
    public:
        void setSharedHolderName(HolderName sharedHolderName);
        string getSharedHolderLastName();
        string getAccountType();
    SharedAccount(string name, string userName, string email, HolderName holderName, HolderName sharedHolderName);
    SharedAccount() : Account(){};
    ~SharedAccount();
};

#endif
