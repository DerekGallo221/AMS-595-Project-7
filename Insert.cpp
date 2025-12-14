#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter a number: "; //Ask for user to input a number
    cin >> num;
    //Conditional statement to check if the number is -1, 0, 1, or any other value
    if (num == -1) {
        cout << "negative one." << endl;
    } else if (num == 0) {
        cout << "zero" << endl;
    } else if (num == 1) {
        cout << "positive one" << endl;
    } else {
        cout << "other value" << endl;
    }   
}