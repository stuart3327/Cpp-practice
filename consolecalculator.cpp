#include <iostream>

int main(){
    using std::cout, std::cin;
    char op;
    double num1, num2, result;
    cout << "**********CALCULATOR**********\n";
    cout << "Enter either (+ - * /):";
    cin >> op;
    cout << "Number 1: "; cin >> num1;
    cout << "Number 2: "; cin >> num2;
    switch(op){
        case '+': result = num1 + num2;
        cout << result <<'\n' ;
        break;
        case '-': result = num1 - num2;
        cout << result<< '\n'; break;
        case '*': result = num1 * num2;
        cout << result<<'\n'; break;
        case '/': result = num1 / num2;
        cout << result<< '\n'; break;
        default: cout << "That wasn't a valid response\n";
    }
    cout << "******************************";
    return 0;
}