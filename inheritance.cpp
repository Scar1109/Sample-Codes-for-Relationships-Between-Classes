#include <iostream>
#include <string>

using namespace std;

class Person {
public:
    string Name;
    int Age;
    double Size;
    string HairColor;

    // Methods
    void walk(double distance) {
        cout << Name << " is walking " << distance << " meters." << endl;
    }

    void eat(string food) {
        cout << Name << " is eating " << food << "." << endl;
    }

    void sleep(int hours) {
        cout << Name << " is sleeping for " << hours << " hours." << endl;
    }
};

class Teacher : public Person {
public:
    // Methods
    void teach(string subject) {
        cout << Name << " is teaching " << subject << "." << endl;
    }
};

class Student : public Person {
public:
    // Methods
    void study(string subject) {
        cout << Name << " is studying " << subject << "." << endl;
    }
};

int main() {
    
    //Object creation and other implementations 

    return 0;
}
