#include <iostream>
#include <string>

// name.length()
// name.empty() : if there is no name => true
// name.clear() : the name will not appear 
// name.append("") : add things in "" after name
// name.at() : Write the character corresponding to the number in parenthesis 
// name.insert(number, "") : insert sth before the character corresponding to the number
// name.find('') : show the number corresponding to the place of things in ''
// name.erase() : example name.erase(0, 3) of Bro Code => Code 
// std::getline()
int main(){
    using std::cout, std::cin, std::string;
    string name;
    cout << "Enter your name: ";
    std::getline(cin, name);
    cout << name.find(' ');
    return 0;
}