#include "Account.h"
#include "HolderName.h"
#include "SharedAccount.h"

#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

void printAccountDetails(Account account, int id);

int main() {
    int id = 0;
    Account youtube = Account("youtube", "user1", "email1@gmail.com", HolderName("user1", "", "test"));
    printAccountDetails(youtube, ++id);
    Account incomplete = Account();
    printAccountDetails(incomplete, ++id);

    SharedAccount sharedYoutube = SharedAccount("youtube", "user2", "email2@gmail.com", HolderName("user2", "will", "share"), HolderName("sharee", "shares", "withUser2"));
    printAccountDetails(sharedYoutube, ++id);
    cout << sharedYoutube.getAccountType() << " 3: shared: " << sharedYoutube.getSharedHolderLastName() << endl;
    return 0;
}


void printAccountDetails(Account account, int id) {
    cout << account.getAccountType() << " " << id << ": " << account.getName() << " by " << account.getHolderLastName() << endl;
    cout << "Number of accounts: " << Account::getNumberOfAccounts() << endl;
};
