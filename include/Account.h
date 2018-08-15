#ifndef ACCOUNT_H
#define ACCOUNT_H

#include "HolderName.h"

class Account {
    private:
        string name;
        string userName;
        string email;
        HolderName holderName;
        
        static int numOfAccounts;

    public:
        void setName(string name);
        void setUserName(string userName);
        void setEmail(string email);
        void setHolderName(HolderName holderName);
        string getName();
        string getUserName();
        string getEmail();
        string getHolderLastName();
        string getAccountType();
    Account();    
    Account(string name, string userName, string email, HolderName holderName);    
    ~Account();    
    static int getNumberOfAccounts() { return numOfAccounts; }
};

#endif
