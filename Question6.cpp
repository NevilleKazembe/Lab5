#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;

int countVowels(const string& text) {
    int count = 0;
    string vowels = "aeiouAEIOU";
    for (char c : text) {
        if (vowels.find(c) != string::npos) count++;
    }
    return count;
}

int countWords(const string& text) {
    stringstream ss(text);
    string word;
    int count = 0;
    while (ss >> word) count++;
    return count;
}

string reverseText(const string& text) {
    string reversed = text;
    reverse(reversed.begin(), reversed.end());
    return reversed;
}

string capitalizeSecondLetter(const string& text) {
    stringstream ss(text);
    string word, result;
    while (ss >> word) {
        if (word.length() > 1) word[1] = toupper(word[1]);
        result += word + " ";
    }
    return result;
}

int main() {
    ifstream file("data.txt");
    string fileData;
    getline(file, fileData);
    file.close();

    cout << "Original text: " << fileData << endl;
    cout << "Number of vowels: " << countVowels(fileData) << endl;
    cout << "Number of words: " << countWords(fileData) << endl;
    cout << "Reversed text: " << reverseText(fileData) << endl;
    cout << "Second letter capitalized: " << capitalizeSecondLetter(fileData) << endl;
}