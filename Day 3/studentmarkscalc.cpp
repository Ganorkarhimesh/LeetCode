#include <iostream>

int main() {
    int MathsMarks ;
    std::cout << "Enter Maths Marks: ";
    std::cin >> MathsMarks;
    
    int PhysicsMarks;
    std::cout << "Enter Physics Marks: ";
    std::cin >> PhysicsMarks;

    int ChemistryMarks;
    std::cout << "Enter Chemistry Marks: ";
    std::cin >> ChemistryMarks;

    int TotalMarks = MathsMarks + PhysicsMarks + ChemistryMarks;

    int AverageMarks = TotalMarks / 3 ;

    int BonusMarks = TotalMarks + 5;

    int RemainderMarks = BonusMarks % TotalMarks ;

    std::cout << "===== STUDENT RESULT =====" << "\n\n" ;
    std::cout << "Maths:- " << MathsMarks << "\n" ;
    std::cout << "Physics:- " << PhysicsMarks << "\n" ;
    std::cout << "Chemistry:- " << ChemistryMarks << "\n";
    std::cout << "Total:- " << TotalMarks << "\n";
    std::cout << "Average:- " << AverageMarks << "\n";
    std::cout << "Bonus:- " << BonusMarks << "\n";
    std::cout << "Remainder:- " << RemainderMarks << "\n\n";


    return 0;
}