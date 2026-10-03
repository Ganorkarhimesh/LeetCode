#include <iostream>

int main() {
    // int for whole numbers example 20, -5, 100
    // float for decimal numbers example 3.14f, 85.5f
    // double for decimal numbers with more precision example 3.14......
    // char for one character example 'A', 'x', '7'

    // how the int used 

    int age = 20;
    int marks = 85;
    int temperature = -5;

    std::cout << age << "\n\n" << marks << "\n\n" << temperature << "\n\n";

    // how the float used 
    float height = 5.8f;
    std::cout << "My height is : " << height << "\n\n";

    // how the double used
    double pi = 3.14159624568; 
    std::cout << "Value of pi is:" << pi << "\n\n"; 

    // how the char used 
    char grade = 'A';
    const char*Name = "Himesh"; 
    const char*sentence = "I am a cs engineering student ";
    std::cout << "My Grade is: " << grade << "\n" << "My Name is: " << Name << "\n" << sentence << "\n\n"; 

    return 0; 
}