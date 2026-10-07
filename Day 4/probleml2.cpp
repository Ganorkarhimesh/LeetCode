#include <iostream>

int main() {
    int Number ;
    std::cout << "Enter Number: ";
    std::cin >> Number ;

    std::cout << "Number is: ";
    if (Number > 0)
    {
        std::cout << "Positive";
    }
    else if (Number < 0)
    {
        std::cout << "Negative";
    }
    else {
        std::cout << "Zero";
    }

    return 0;
}