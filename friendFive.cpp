#include <iostream>
using namespace std;
//Friend Member function

class Printer {
public:
    void printDimensions(const class Box& b);  
};

class Box {
    double length;
    double width;
public:
    Box(double l, double w) : length(l), width(w) {}

    friend void Printer::printDimensions(const Box& b);
};

void Printer::printDimensions(const Box& b) {
    std::cout << "Length: " << b.length << ", Width: " << b.width << std::endl;
}

int main() {
    Box box(5.0, 3.0);
    Printer printer;
    printer.printDimensions(box);    
}
