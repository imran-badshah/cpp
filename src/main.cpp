#include "Account.h"
#include "HolderName.h"
#include "SharedAccount.h"

#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main() {
    Account youtube = Account("youtube", "user1", "email1@gmail.com", HolderName("user1", "", "test"));
    cout << "Account 1: " << youtube.getName() << " by " << youtube.getHolderLastName() << endl;
    cout << "Number of accounts: " << Account::getNumberOfAccounts() << endl;
    Account incomplete = Account();
    cout << "Account 2: " << incomplete.getName() << " by " << incomplete.getHolderLastName() << endl;
    cout << "Number of accounts: " << Account::getNumberOfAccounts() << endl;

    SharedAccount sharedYoutube = SharedAccount("youtube", "user2", "email2@gmail.com", HolderName("user2", "will", "share"), HolderName("sharee", "shares", "withUser2"));
    cout << "Account 3: " << sharedYoutube.getName() << " by " << sharedYoutube.getHolderLastName() << endl;
    cout << "Account 3 :: shared: " << sharedYoutube.getSharedHolderLastName() << endl;
    cout << "Number of accounts: " << Account::getNumberOfAccounts() << endl;
    return 0;
}
