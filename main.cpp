#include <iostream>

using namespace std;

int main() {
    string word1, word2, word3;

    cout << "Type words and program will find the longest word:" << endl;

    cin >> word1 >> word2 >> word3;

    string longestword;

    if (word1.length() >= word2.length() and word1.length() >= word3.length())
        longestword = word1;

    if (word2.length() >= word1.length() and word2.length() >= word3.length())
        longestword = word2;

    if (word3.length() >= word1.length() and word3.length() >= word2.length())
        longestword = word3;

    cout << "The longest word:" << " " << longestword << endl;

    return 0;
}