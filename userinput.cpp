// << (insertion operator)
// >>  (extraction operator)
// std::cout : standard character out
#include <iostream>
#include <string>
int main(){
   std::string name;
   int age;
   std::cout << "How old are you? " ;
   std::cin >> age;

   std::cout << "What's your name? " ;
   std::getline(std::cin >> std::ws, name);
   
   
   std::cout << "Hello " << name;

   return 0;
}