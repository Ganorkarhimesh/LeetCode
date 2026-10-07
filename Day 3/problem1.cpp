#include <iostream>

int main() {
    int age;
    std::cout << "Enter Age: ";
    std::cin >> age ;

    int MathsMarks;
    std::cout << "Enter Maths Marks: ";
    std::cin >> MathsMarks;

    int PhysicsMarks;
    std::cout << "Enter Physics Marks:- ";
    std::cin >> PhysicsMarks;

    int ChemistryMarks;
    std::cout << "Enter Chemistry Marks: ";
    std::cin >> ChemistryMarks;

    int BonusMarks;
    std::cout << "Enter BonusMarks: ";
    std::cin >> BonusMarks;

    int DivisionMarks;
    std::cout << "Enter Division Marks: ";
    std::cin >> DivisionMarks;

    int TotalMarks =  MathsMarks + PhysicsMarks + ChemistryMarks; 
    double AverageMarks = TotalMarks / 3;
    int MarksAfterBonus = TotalMarks + BonusMarks;
    int Remainder = TotalMarks % DivisionMarks ;

    std::cout << "===== STUDENT RESULT =====\n";
    std::cout << "Age: " << age << "\n\n";
    std::cout << "Maths: " << MathsMarks << "\n\n";
    std::cout << "Physics: " << PhysicsMarks << "\n\n";
    std::cout << "Chemistry: " << ChemistryMarks << "\n\n";
    std::cout << "Total Marks: " << TotalMarks << "\n\n";
    std::cout << "Average Marks: " << AverageMarks << "\n\n";
    std::cout << "Bonus Marks: " << BonusMarks << "\n\n";
    std::cout << "Marks After Bonus: " << MarksAfterBonus << "\n\n";
    std::cout << "Remainder: " << Remainder << "\n\n";
    std::cout << "==========================";


    return 0; 
}

// problem is output look like
// Age: 20
// Maths: 85
// Physics: 78
// Chemistry: 82
// Bonus: 5
// Division Number: 7

// and the real output come like 

// Age: 20
// Maths: 85
// Physics: 78
// Chemistry: 82
// Bonus: 5
// Division Number: 7