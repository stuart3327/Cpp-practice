/*typedef = reverved keyword used to create am additional name (alias)
            for another fata type.
            New identifier for an axisting type 
            Helps with readability and reduces typos*/
#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairlist_t;
// typedef std::string text_t;
// typedef int number_t;

using text_t = std::string;
using number_t = int;
int main(){
    using std::cout;
    text_t firstName = "Nguyen";
    number_t age = 18;
    cout << firstName << '\n';
    cout << age << '\n';
    return 0;
}