#include <iostream>
#include <string>

class Laptop {
public:
    // Constructor to initialize the object
    Laptop(const std::string& n, double c, int ram) : name(n), cost(c), ramSize(ram) {}

    // Member function to display laptop details
    void displayDetails() {
        std::cout << "Laptop Name: " << name << std::endl;
        std::cout << "Cost: $" << cost << std::endl;
        std::cout << "RAM Size: " << ramSize << " GB" << std::endl;
    }

private:
    std::string name;
    double cost;
    int ramSize;
};

int main() {
    Laptop laptop1("Laptop A", 999.99, 16);
    Laptop laptop2("Laptop B", 1499.99, 32);

    std::cout << "Details of Laptop 1:" << std::endl;
    laptop1.displayDetails();
    std::cout << std::endl;

    std::cout << "Details of Laptop 2:" << std::endl;
    laptop2.displayDetails();
    
    return 0;
}
