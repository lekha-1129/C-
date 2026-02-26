#include <iostream>
using namespace std;

class Student {
    int roll;
    string name;

public:
    Student() {}

    Student(int r, string n) {
        roll = r;
        name = n;
    }

    Student(const Student &s) {
        roll = s.roll;
        name = s.name;
    }

    void display() {
        cout << "Roll: " << roll << " Name: " << name << endl;
    }

    Student& operator=(const Student &s) {
        roll = s.roll;
        name = s.name;
        return *this;
    }
};

int main() {
    Student s1(1, "Arun");
    Student s2 = s1;  
    Student s3(3, "Meena");

    cout << "Before assignment:\n";
    s1.display();
    s2.display();
    s3.display();

    s3 = s1;

    cout << "\nAfter assignment:\n";
    s3.display();

    return 0;
}