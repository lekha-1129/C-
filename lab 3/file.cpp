#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ofstream outFile("data.txt");
    string text;

    cout << "Enter text: ";
    getline(cin, text);

    outFile << text;
    outFile.close();

    ifstream inFile("data.txt");
    string readText;

    getline(inFile, readText);
    cout << "File Content: " << readText;

    inFile.close();
    return 0;
}
