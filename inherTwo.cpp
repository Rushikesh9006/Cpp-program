#include <iostream>
using namespace std;

class Animal {
protected:
    string name;
public:
    Animal(string n) : name(n) {}

    void speak() {
        cout << name << " makes a sound!" << endl;
    }
};

class Dog : public Animal {
public:
    Dog(string n) : Animal(n) {}

    void bark() {
        cout << name << " barks!" << endl;
    }
};

int main() {
    Dog myDog("Bommu");
    myDog.speak(); 
    myDog.bark();   // Defined in Dog class
}

