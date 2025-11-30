#include <iostream>
int main(){
    // int ...; : declaration
    // Gán giá trị cho biến: assignment
    //integer (whole number)
    int age = 18;
    int year = 2025;
    int days = 7.5;

    //double (number including decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    // single character
    char grade = 'A';
    char initial = 'B';
    char dollar = '$';

    // boolean (true or false)
    bool student = true;
    bool power = true;
    bool dead = false;

    // string (objects that represents a sequence of text)
    std::string name = "NguyetAn";
    std::string boylove = "Cao H";
    std::string food = "Sweets";

    std::cout << "Hello " << name << '\n';
    std::cout << "I am " << age << " years old";
    return 0;
}