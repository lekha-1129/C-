#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string text, cleaned = "";

    cout << "Enter text: ";
    getline(cin, text);


    for (char ch : text) {
        if (isalnum(ch)) {
            cleaned += tolower(ch);
        }
    }

    string reversed = cleaned;
    reverse(reversed.begin(), reversed.end());

    if (cleaned == reversed)
        cout << "It is a Palindrome.";
    else
        cout << "Not a Palindrome.";

    return 0;
}
