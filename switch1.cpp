#include <iostream>

// switch = alternative to using many "else if" statements
//           compare one value against matching cases
int main(){
using std::cout, std::cin;
int month;
cout << "Enter the month (1-12): ";
cin >> month;

switch(month){
    case 1: 
        cout << "It's Jan";
        break;
    case 2:
        cout << "It's Feb";
        break;
    case 3:
        cout << "It's Mar";
        break;
    case 4: 
        cout << "It's Apr";
        break;
    case 5: 
        cout << "It's May";
        break; 
    case 6:
        cout << "It's Jun";
        break;
    case 7:
        cout << "It's Jul";
        break;
    case 8:
        cout << "It's Aug";
        break;
    case 9:
        cout << "It's Sep";
        break;
    case 10:
        cout << "It's Oct";
        break;
    case 11:
        cout << "It's Nov";
        break;
    case 12: 
       cout << "It's Dec";
       break;
    default:
       cout << "Please enter in only number (1-12) ";      
}
return 0;
}