#include <iostream>
using namespace std;

class Person {
private:
    int* age;

public:
    Person(int age) {
        this->age = new int(age);
        cout << "Constructor called" << endl;
    }

    ~Person() {
        delete age;
        cout << "Destructor called" << endl;
    }

    Person(const Person& p) {
        age = new int(*p.age);
        cout << "Copy constructor called" << endl;


    }

    void show() {
        cout << *age << endl;
    }
};

int main()
{
    Person p1(18);
    Person p2(p1);
    p1.show();
    p2.show();

    return 0;
}
