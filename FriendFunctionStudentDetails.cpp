#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    string department;
    string course;

public:
    Student(string n, int a, string d, string c) {
        name = n;
        age = a;
        department = d;
        course = c;
    }

    friend void displayStudentDetails(Student &s);
};

void displayStudentDetails(Student &s) {
    cout << "Name: " << s.name << endl;
    cout << "Age: " << s.age << endl;
    cout << "Department: " << s.department << endl;
    cout << "Course: " << s.course << endl;
}

int main() {
    Student student1("Alice", 20, "Computer Science", "Data Structures");
    displayStudentDetails(student1);

    return 0;
}
