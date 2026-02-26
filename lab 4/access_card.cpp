#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    cout << "Enter employee name: ";
    cin >> name;

    string firstTwo = name.substr(0, 2);
    string accessCard = "";

    for (int i = 0; i < 4; i++) {
        accessCard += firstTwo;
    }

    cout << "Access Card Code: " << accessCard;

    return 0;
}
