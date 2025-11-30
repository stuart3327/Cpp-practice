/*Namespace = provides a solution for preventing name conflicts in large projects.
Each entity (thực thể) needs a unique name.
A namespace allows for identically entities as long as the namespaces are different.
*/
#include <iostream>
int main(){
    using std::cout; 
    using std::cin;
    int x; cin >> x;
    cout << x+2;
    return 0;
}

