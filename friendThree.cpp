#include <iostream>

class Box {
private:
    double length;
    double width;
public:
    Box(double l, double w) : length(l), width(w) {}

    friend void friendFunction(Box& b);
};

// Friend function that can access private members of Box
void friendFunction(Box& b) {
    std::cout << "Length: " << b.length << ", Width: " << b.width << std::endl;
}

int main() {
    Box b(5.0, 3.0);
    friendFunction(b);  // Calling the friend function
    return 0;
}

