// four-function calculator
#include <iostream>
using namespace std;

int main(){
    float num1, num2, ans;
    char sign, confirm;

    cout << "\n\n**********Welcome to my calculator**********" << endl;
    do{
    cout << "\nEnter first number, an operator(+, -, *, /) and a second number: " << endl;
    cin >> num1 >> sign >> num2;

    switch(sign){
    case '+':
        ans = num1 + num2;
        cout << "Answer = " << ans << endl;
        break;
    case '-':
        ans = num1 - num2;
        cout << "Answer = " << ans << endl;
        break;
    case '*':
        ans = num1 * num2;
        cout << "Answer = " << ans << endl;
        break;
    case '/':
        ans = num1 / num2;
        cout << "Answer = " << ans << endl;
        break;
    default:
        cout << "Invalid input" << endl;
    }
    cout << "\nWould you like to perform another operation? (y/n): ";
    cin >> confirm;
    }
    while(confirm == 'y' || confirm == 'Y');

    return 0;
}
