#include "Account.h"
#include "HolderName.h"
#include "SharedAccount.h"

#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

void printAccountDetails(Account account, int id);
void printAccountDetails(Account *account, int id);

int main() {
    int id = 0;
    Account youtube = Account("youtube", "user1", "email1@gmail.com", HolderName("user1", "", "test"));
    printAccountDetails(youtube, ++id);
    Account incomplete = Account();
    printAccountDetails(incomplete, ++id);

    cout << endl << "Shared: " << endl;

    SharedAccount sharedYoutube = SharedAccount("youtube", "user2", "email2@gmail.com", HolderName("user2", "will", "share"), HolderName("sharee", "shares", "withUser2"));
    printAccountDetails(sharedYoutube, ++id);
    cout << sharedYoutube.getAccountType() << " 3: shared: " << sharedYoutube.getSharedHolderLastName() << endl;
    
    SharedAccount *sharedIncomplete;
    sharedIncomplete = new SharedAccount();
    printAccountDetails(sharedIncomplete, ++id);
    cout << sharedIncomplete->getAccountType() << " 4: shared: " << sharedIncomplete->getSharedHolderLastName() << endl;

    SharedAccount *sharedYoutube3;
    sharedYoutube3 = new SharedAccount("youtube", "user3", "email3@gmail.com", HolderName("user3", "will", "share"), HolderName("sharee", "shares", "withUser3"));
    printAccountDetails(sharedYoutube3, ++id);
    cout << sharedYoutube3->getAccountType() << " 4: shared: " << sharedYoutube3->getSharedHolderLastName() << endl;
    return 0;
}


void printAccountDetails(Account account, int id) {
    cout << account.getAccountType() << " " << id << ": " << account.getName() << " by " << account.getHolderLastName() << endl;
    cout << "Number of accounts: " << Account::getNumberOfAccounts() << endl;
};

void printAccountDetails(Account *account, int id) {
    cout << "*" << endl;
    cout << account->getAccountType() << " " << id << ": " << account->getName() << " by " << account->getHolderLastName() << endl;
    cout << "Number of accounts: " << Account::getNumberOfAccounts() << endl;
};
