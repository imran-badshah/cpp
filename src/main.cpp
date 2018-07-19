#include<iostream>
#include<vector>
#include<string>
#include<fstream>

using namespace std;

string getComparisonResult(string wordInFocus, string targetWord);

int main() {
    string userInput;
    string targetString = "cat";
    string awaitingResult = "start";
    while (awaitingResult != "alphabetically equal to") {
        cout << "Enter a word to see if you are alphabetically above the reference word: \n";
        getline(cin, userInput);
        awaitingResult = getComparisonResult(userInput, targetString);
        cout << "Your word - " << userInput << " is " << awaitingResult + " the target string." << endl;
    }
    cout << "Hurray! You made it!" << endl;
    return 0;
}

string getComparisonResult(string wordInFocus, string targetWord) {
    const int comparisonScore = wordInFocus.compare(targetWord);
    cout << "comparisonScore: \n" << comparisonScore << endl;
    string compareResult;
    if (comparisonScore < 0) {
       compareResult = "alphabetically lower";
    } else if (comparisonScore == 0) {
        compareResult = "alphabetically equal to";
    } else if (comparisonScore > 0) {
        compareResult = "alphabetically greater than";
    } else {
        compareResult = "uncomparable to";
    }
    return compareResult;
}