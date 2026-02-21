// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int myCounter(string sentence, string substring) {

    if (sentence.length() < substring.length()) return 0;

    int count = 0;
    for (int i = 0; i <= sentence.length() - substring.length(); i++) {
        bool areEqual = true;
        for (int j = 0; j < substring.length(); j++) {
            if (sentence[i + j] != substring[j]) {
                areEqual = false;
                break;
            }
        }
        if (areEqual == true) count++;
    }
    return count;
}

int main(int argc, char* argv[]) {
    if (argc != 3) {
        cout << "Usage: <Text> <Search pattern>" << endl;
        return 1;
    }
    string sentence = argv[1];
    string substring = argv[2];

    int count = myCounter(sentence, substring);
    cout << "\"" << substring << "\" kommt " << count
        << " mal in \"" << sentence << "\" vor." << endl;
    return 0;
}
