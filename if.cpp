#include <iostream>

int main(){
    using std::cout;
    using std::cin;
    // if statement = do sthh if a condition is true.
    //                If not, then don't do it.
    int age;
    cout << "Your age is "; cin >> age;
    if(age >= 100){
        cout << "You're too old to enter this site!";
    }
    else if (age >= 18){
        cout << "Welcome to the site!";
    }
    else if(age < 0){
        cout << "You haven't been born yet!";
    } 
    else{
        cout << "You're not old enough to enter!";
    }
return 0;
}