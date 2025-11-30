#include <iostream>
#include <cmath>

int main(){
    using std::cout;
    using std::cin;
    double a, b, c;
    
    cout << "Enter side A: ";
    cin >> a;

    cout << "Enter side B: ";
    cin >> b;

    cout << "Side c = " << sqrt(pow(a, 2) + pow(b, 2));

return 0;
}