#include <iostream>
// do while loop = do some block of code first, 
//                  THEN repeat again if condition is true 
int main(){
    using std::string, std::cout, std::cin;
    int number;
    do{
        cout << "Enter a positive number: "; cin >> number;
    } while(number < 0);
    cout << "The # number is: " << number;
    return 0;
}