#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    float gpa;

public:
    Student(int r, float g) {
        roll = r;
        gpa = g;
    }

    friend void displayRecord(Student s);

    friend class Admin;
};

void displayRecord(Student s) {
    cout << "Friend Function Access:\n";
    cout << "Roll: " << s.roll << " GPA: " << s.gpa << endl;
}

class Admin {
public:
    void show(Student s) {
        cout << "Admin Access:\n";
        cout << "Roll: " << s.roll << " GPA: " << s.gpa << endl;
    }
};

int main() {
    Student s1(10, 8.7);

    displayRecord(s1);

    Admin a;
    a.show(s1);

    return 0;
}