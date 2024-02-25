#include <iostream>

using namespace std;
class Person {
public:
    string name;
    int age;

    void printInfo() {
        cout << "Name: " << name << ", Age: " << age;
    };
};


int main() {
    Person p1;
    p1.name = "John Doe";
    p1.age = 30;
    p1.printInfo();
}
