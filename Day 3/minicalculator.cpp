#include <iostream>

int main()
{
    int firstnumber;
    std::cout << "Enter first Number :- ";
    std::cin >> firstnumber;

    int secondnumber;
    std::cout << "Enter Second Number: ";
    std::cin >> secondnumber; 
    
    int sum = firstnumber + secondnumber;
    int difference = firstnumber - secondnumber;
    int product = firstnumber * secondnumber;
    int integerQuotient = firstnumber / secondnumber;
    int remainder = firstnumber % secondnumber;
    double decimalQuotient = firstnumber / (secondnumber * 1.0);

    int result = (firstnumber + secondnumber) * 2;

    result += 5;
    result *= 2;
    result -= 10;

    std::cout << "sum: " << sum << "\n";
    std::cout << "Difference: " << difference << "\n";
    std::cout << "Product: " << product << "\n";
    std::cout << "Integer Quotient: " << integerQuotient << "\n";
    std::cout << "Remainder: " << remainder << "\n";
    std::cout << "Decimal Quotient: " << decimalQuotient << "\n";
    std::cout << "Result: " << result << "\n";

    return 0;
}