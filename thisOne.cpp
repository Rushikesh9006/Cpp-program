#include <iostream>
using namespace std;

class Sample {
    int data;
public:
    Sample(int x) : data(x) {}

    void printValue() {
        cout << "data: " << this->data <<endl;
    }
   
    Sample* getThisPointer() {
        return this;
    }
};

int main() {
    Sample obj(42);
    obj.printValue();  
    Sample* ptr = obj.getThisPointer();  
    cout << "Address of obj: " << ptr << endl;
}

