#include <iostream>
#include <string>
using namespace std;

void reverseSentence(string &s, int start, int end) {
    if (start >= end) {
        return;
    }

    swap(s[start], s[end]);

    reverseSentence(s, start + 1, end - 1);
}

int main() {
    string sentence;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    reverseSentence(sentence, 0, sentence.length() - 1);

    cout << "Reversed sentence: " << sentence << endl;

    return 0;
}