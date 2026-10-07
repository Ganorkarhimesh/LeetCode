#include <iostream>

int main()
{
    int marks;
    std::cout << "Enter Marks:- ";
    std::cin >> marks;

    if (marks >= 90)
    {
        std::cout << "Grade A";
    }
    else if (marks >= 75)
    {
        std::cout << "Grade B";
    }
    else if (marks >= 60)
    {
        std::cout << "Grade C";
    }
    else if (marks >= 40)
    {
        std::cout << "Grade D";
    }
    else
    {
        std::cout << "Fail";
    }

    return 0;
}