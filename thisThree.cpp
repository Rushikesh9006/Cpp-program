#include <iostream>
using namespace std;

class Sample {
    int data;
public:
    Sample(int x) : data(x) {}
    
    Sample& setValue(int x) {
        this->data = x;
        return *this;  
    }

    void printValue() const {
        cout << "data: " << this->data << endl;
    }
};

int main() {
    Sample obj(42);
	obj.printValue();

    obj.setValue(100).printValue(); //method chaining
}

