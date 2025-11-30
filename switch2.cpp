#include <iostream>
int main(){
    using std::cout, std::cin;
       char grade;
       cout << "What letter grade? "; cin >> grade;

       switch(grade){
        case 'A':
            cout << "You did great";
            break;
        case 'B':
            cout << "You did good";
            break;
        case 'C':
            cout << "You did okay";
            break;
        case 'D':
            cout << "You did not do good";
            break;
        case 'F':
            cout << "YOU'RE FAILED!";
            break;
        default: 
            cout << "Please only enter in valid grade!";
       }
return 0; 
}