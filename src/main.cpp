#include<iostream>
#include<vector>
#include<string>
#include<fstream>

using namespace std;

int main() {
    vector <int> firstVect(1);
    int firstArray[5] = { 2, 5, 6, 7, 1 };
    firstVect.insert(firstVect.begin(), firstArray, firstArray+4);
    cout << "firstVect_3: " << firstVect.at(3) << endl;
    cout << "firstVect_size: " << firstVect.size() << endl;
    return 0;
}
