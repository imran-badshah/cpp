#include<iostream>
#include<vector>
#include<string>
#include<fstream>

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
    Account();    
    Account(string name, string userName, string email, HolderName holderName);    
    ~Account();    
    static int getNumberOfAccounts() { return numOfAccounts; }
};

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

int main() {
    Account youtube = Account("youtube", "user1", "email1@gmail.com", HolderName("user1", "", "test"));
    cout << "Account 1: " << youtube.getName() << " by " << youtube.getHolderLastName() << endl;
    cout << "Number of accounts: " << Account::getNumberOfAccounts() << endl;
    Account incomplete = Account();
    cout << "Account 2: " << incomplete.getName() << " by " << incomplete.getHolderLastName() << endl;
    cout << "Number of accounts: " << Account::getNumberOfAccounts() << endl;
    return 0;
}
