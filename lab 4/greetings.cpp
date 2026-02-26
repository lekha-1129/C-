#include <iostream>
#include <string>
using namespace std;

int main() {
    string greeting;
    int n;

    cout << "Enter greeting phrase: ";
    getline(cin, greeting);

    cout << "Enter value of n: ";
    cin >> n;

    string result = "";

    if (greeting.length() < n) {
        for (int i = 0; i < n; i++) {
            result += greeting;
        }
    } else {
        result = greeting.substr(0, n);
    }

    cout << "Generated Greeting: " << result;

    return 0;
}
