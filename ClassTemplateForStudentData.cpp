
#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Student {
private:
    string name;
    T age;
    string course;
    string department;

public:
    Student(string n, T a, string c, string d) : name(n), age(a), course(c), department(d) {}

    void display() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {
    Student<int> student1("Alice", 20, "CS101", "Computer Science");
    Student<double> student2("Bob", 21.5, "Math101", "Mathematics");

    cout << "Student 1 details:" << endl;
    student1.display();

    cout << "\nStudent 2 details:" << endl;
    student2.display();

    return 0;
}
