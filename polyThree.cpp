#include <iostream>
using namespace std;

class Animal {
public:   
    virtual void speak() {
        cout << "Animal makes a sound!" << endl;
    }
};

class Dog : public Animal {
public:    
    void speak()  {
        cout << "Dog barks!" << endl;
    }
};

class Cat : public Animal {
public:    
    void speak()  {
        cout << "Cat meows!" << endl;
    }
};

void makeSound(Animal* aPtr){
	aPtr->speak();
	delete aPtr;
}

int main() {
    makeSound(new Dog());
    makeSound(new Cat());
}


