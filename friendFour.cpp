#include <iostream>
using namespace std;

class Box {
private:
    double length;
    double width;

public:
    Box(double l, double w) : length(l), width(w) {}

    friend class Container;
};

class Container {
public:
    void printDimensions(const Box& b) {
        cout << "Length: " << b.length << ", Width: " << b.width << endl;
    }
};

int main() {
    Box box(5.0, 3.0);
    Container container;
    container.printDimensions(box);  
}

