#include <iostream>
#include <cstdio>

using namespace std;

bool sevenLetters(string);
bool lessThanSeven(string);
int uniqueLetters(string);

int main() {
    //read # of words
    int w; cin >> w;
    for(int i = 0; i < w; i++) {
        string word; cin >> word;
        if(lessThanSeven(word)) {cout << word << endl;}
    }
}

bool lessThanSeven(string word) {
    return (uniqueLetters(word) <= 7);
}

bool sevenLetters(string word) {
    return (uniqueLetters(word) == 7);
}

int uniqueLetters(string word) {
    bool letters[26] {false, false, false, false, false, false, false, false, false, false, false, 
                      false, false, false, false, false, false, false, false, false, false, false, 
                      false, false, false, false};
    for(int i = 0; i < word.length(); i++) {
        letters[word[i] - 97] = true; 
    }
    int sum = 0;
    for(int i = 0; i < 26; i++) {
        sum += letters[i];
    }
    return sum;
}
