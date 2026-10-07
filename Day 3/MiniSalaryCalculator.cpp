#include <iostream>

int main() {
    int BasicSalary;
    std::cout << "Enter Basic Salary:- ";
    std::cin >> BasicSalary ;

    int Bonus;
    std::cout << "Enter Bonus:- ";
    std::cin >> Bonus ;

    int Deduction;
    std::cout << "Enter Deduction:- ";
    std::cin >> Deduction;

    int GrossSalary = BasicSalary + Bonus ;
    int FinalSalary1 = GrossSalary - Deduction ;

    int FinalSalary += 1000;
    int FinalSalary *= 2;
    int FinalSalary -= 500;

    std::cout << "===== SALARY CALCULATOR =====\n\n";
    std::cout << "Basic Salary: " << BasicSalary << "\n";
    std::cout << "Bonus: " << Bonus << "\n";
    std::cout << "Deduction: " << Deduction << "\n";
    std::cout << "Gross Salary: " << GrossSalary << "\n";
    std::cout << "Final Salary Before Adjustment: " << FinalSalary1 << "\n";
    
    
    "

    return 0;
}