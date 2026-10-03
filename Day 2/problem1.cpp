#include <iostream>

int main()
{
    const char*Name = "Himesh";
    int age = 20;
    int MathsMarks = 85;
    int PhysicsMarks = 78;
    double Percentage = 81.5;
    char Grade = 'A';

    int total = MathsMarks + PhysicsMarks;

    std::cout << "Student Information" << "\n";
    std::cout << "Name :" << Name << "\n";
    std::cout << "Age: " << age << "\n";
    std::cout << "Mathematics Marks : " << MathsMarks << "\n";
    std::cout << "Physics Marks :" << PhysicsMarks << "\n";
    std::cout << "Percentage :" << Percentage << "\n";
    std::cout << "Grade :" << Grade << "\n";
    std::cout << "Total Marks: " << total << "\n";

    return 0;
}

/* write following program that stores and displays the following information
name
age
subjects
percentage
grade required output :-
Student Information
Name: Himesh
Age: 20
Maths Marks: 85
Physics Marks: 78
Percentage: 81.5
Grade: A
Total Marks: 163
*/