#include <iostream>

int main(){
    /* ternary operator ?: replacement to an if/else statement
         condition ? code1 : code 2;
    */
   using std::cout, std::cin;
   bool hungry = true;
   //hungry ? cout << "Your are hungry" : cout << "You're full"; 
   cout << (hungry? "You're hungry" : "You're full" );
   return 0;
}