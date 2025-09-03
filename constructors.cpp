// Aakash Choudhari
// 24070123031
// E&TC-A2

#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    Student() {
        name = "Unknown";
        age = 0;
    }

    Student(string n, int a) {
        name = n;
        age = a;
    }

    Student(const Student &s) {
        name = s.name;
        age = s.age;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1;
    cout << "Student 1 (Default): ";
    s1.display();

    string n;
    int a;
    cout << "\nEnter name: ";
    cin >> n;
    cout << "Enter age: ";
    cin >> a;

    Student s2(n, a);
    cout << "Student 2 (Parameterized): ";
    s2.display();

    Student s3(s2);
    cout << "Student 3 (Copy of Student 2): ";
    s3.display();

    return 0;
}
