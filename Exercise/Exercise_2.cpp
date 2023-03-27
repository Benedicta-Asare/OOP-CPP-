#include <iostream>

using namespace std;

int main(){
    //Temperature conversion program
    float tempc, tempf;
    int choice;
    cout << "*****Welcome to my temperature conversion program*****" << endl;
    cout << "What conversion do you want to do?" << endl;
    cout << "1. degree Celsius to degree Fahrenheit" << endl;
    cout << "2. degree Fahrenheit to degree Celsius" << endl;
    cin >> choice;
    if (choice == 1){
        cout << "Enter temperature in degree Celsius: ";
        cin >> tempc;
        tempf = tempc * 1.8 + 32;
        cout << "The equivalent temperature in degree Fahrenheit is " << tempf << endl;
    }
    else if (choice == 2){
        cout << "Enter temperature in degree Fahrenheit: ";
        cin >> tempf;
        tempc = (tempf - 32) / 1.8;
        cout << "The equivalent temperature in degree Celsius is " << tempc << endl;
    }


    // four-function calculator
    float num1, num2, ans;
    char sign, confirm;

    cout << "\n\n**********Welcome to my calculator**********" << endl;
    do{
    cout << "\nEnter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter an operator(+, -, *, /): ";
    cin >> sign;
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