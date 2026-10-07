#include <iostream>

int main() {
    int marks;
    std::cout << "Enter Marks:- ";
    std::cin  >> marks;

    std::cout << "Result is: ";
    if (marks > 40)
    {
        std::cout << "Pass";
    }
    else {
        std::cout << "Fail";
    }
    

    return 0; 
}