#include "IntegerArray.cpp"
#include <iostream>
using namespace std;

int main()
{
    IntegerArray N;

    N.fillUp();
    N.printAll();
    std::cout << "Current length is " << N.getLength() << std::endl;

    std::cout << "After sorting:\n";
    N.sortAsc();
    N.printAll();

    std::cout << "After removing the last element:\n";
    N.removeLastelm();
    std::cout << "Current length is " << N.getLength() << std::endl;

    std::cout << "Append the element\n";
    N.appendElement(10);
    std::cout << "Current length is " << N.getLength() << std::endl;
    N.printAll();
}