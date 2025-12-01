#include <iostream>
// pseudo-random = NOT truly random (but close)
int main(){
    using std::cout, std::cin;
     
         srand(time(NULL));
     
     int num1 = (rand() % 6) + 1;
     int num2 = (rand() % 6) + 1;
     int num3 = (rand() % 6) + 1;
    
     cout << num1 << '\n' << num2 << '\n' << num3;

return 0;
}