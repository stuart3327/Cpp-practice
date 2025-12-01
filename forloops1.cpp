#include <iostream>
// break = break out of a loop
// continue = skip current iteration
int main(){
    using std::cout, std::cin;
    for(int i = 1; i <= 20; i++){
        if(i == 13){
            continue; //skip the number 13
        }
        cout << i << '\n';
    }
    return 0;
}