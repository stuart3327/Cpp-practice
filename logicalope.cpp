#include <iostream>
// $$ = check if 2 conditions are true (and)
// || = check if at least one of two conditions is true (or)
// !  = reverses the logical state of its operand (not)
int main(){
using std::cout, std::cin;
        double temp;
        char unit;
    cout << "**** Temperature conversion ****\n";
    cout << "F = Fahrenheit\n";
    cout << "C = Celsius\n";
    cout << "What unit would you like to convert to: "; cin >> unit;

    if (unit == 'F' || unit == 'f'){
        cout << "Enter the temperature in Celsius: "; cin >> temp;
        temp = (1.8 * temp) + 32.0;
       cout << "The temperature is "<< temp<< "F\n";
    }
    else if(unit == 'C' || unit == 'c'){
        cout << "Enter the temperature in Farenheit: "; cin >> temp;
        temp = (temp - 32.0)/1.8;
        cout << "The temperature is "<< temp<< "C\n";
    }
    else{ 
        cout << "Please enter in only C or F\n";
    }
    cout << "********************************";
return 0;
}