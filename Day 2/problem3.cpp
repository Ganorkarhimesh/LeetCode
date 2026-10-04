#include <iostream>

int main() {
    const char*Name = "Himesh";
    int age = 20;
    int NewMathsMarks = 85;
    int PhysicsMarks = 78; 
    double InitialBalance = 5000.50;
    double NewDeposit = 2500.75;
    char Grade = 'A'; 

    int TotalMarks1 = NewMathsMarks + PhysicsMarks;
    int BalanceAfterDeposit1 = InitialBalance + NewDeposit;
    
    int MathsMarks = 90;
    double Deposit = 1000.00 ;

    int TotalMarks2 = MathsMarks + PhysicsMarks ;
    int BalanceAfterDeposit2 = InitialBalance + Deposit;

    std::cout << "===== BEFORE RECALCULATION =====\n";
    std::cout << "Maths Marks: " << MathsMarks << "\n";
    std::cout << "Deposit: " << Deposit << "\n";
    std::cout << "Total Marks: " << TotalMarks1 << "\n";
    std::cout << "Balance After Deposit: " << BalanceAfterDeposit1 << "\n\n";

    std::cout << "===== AFTER RECALCULATION =====\n";
    std::cout << "Maths Marks: " << MathsMarks << "\n";
    std::cout << "Deposit: " << Deposit << "\n";
    std::cout << "Total Marks: " << TotalMarks2 << "\n";
    std::cout << "Balance After Deposit: " << BalanceAfterDeposit2 << "\n\n";


    return 0; 
}


// I want this output end :- 
// ===== BEFORE RECALCULATION =====
// Maths Marks: 90
// Deposit: 1000
// Total Marks: 163
// Balance After Deposit: 7501.25

// ===== AFTER RECALCULATION =====
// Maths Marks: 90
// Deposit: 1000
// Total Marks: 168
// Balance After Deposit: 6000.50