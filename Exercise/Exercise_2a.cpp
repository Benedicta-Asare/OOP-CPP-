//Temperature conversion program
#include <iostream>

using namespace std;

int main(){
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

    return 0;
}

    