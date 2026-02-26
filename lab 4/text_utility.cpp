#include <iostream>
#include <string>
using namespace std;

int main() {
    string paragraph, word, replacement;

    cout << "Enter paragraph: ";
    getline(cin, paragraph);

    cout << "Enter word to search: ";
    cin >> word;

    cout << "Enter replacement word: ";
    cin >> replacement;

    size_t pos = paragraph.find(word);

    while (pos != string::npos) {
        paragraph.replace(pos, word.length(), replacement);
        pos = paragraph.find(word, pos + replacement.length());
    }

    cout << "Updated Paragraph:\n" << paragraph;

    return 0;
}
