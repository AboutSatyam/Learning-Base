#include <iostream>
#include <string>

// Object-Oriented approach in C++
class Greeter {
public:
    void greet(std::string name) {
        std::cout << "Hello, " << name << " from C++!" << std::endl;
    }
};

int main() {
    Greeter myGreeter;
    myGreeter.greet("Developer");
    return 0;
}