/*type conversion = conversion is a value of one data type to another 
   2 ways: Implicit = Automatic 
           Explicit = Precede value with new data (type of data) */

#include <iostream>
int main(){
    using std::cout;
// implicit: char x = 100; => the result: d (char)
    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions * 100;
                         //(explicit)
    cout << score << "%";
    return 0;
}