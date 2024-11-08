
#include <iostream>
#include <string>
using namespace std;

template <typename T>
struct Student {
    string name;
    T age;
    string course;
    string department;

    void display() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {
    Student<int> student1{"Alice", 20, "CS101", "Computer Science"};
    Student<double> student2{"Bob", 21.5, "Math101", "Mathematics"};

    cout << "Student 1 details:" << endl;
    student1.display();

    cout << "\nStudent 2 details:" << endl;
    student2.display();

    return 0;
}
