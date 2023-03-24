#include <iostream>
#include <cmath>

using namespace std;

int main(){

    float height, weight, bmi;

    cout << "Enter your height(in cm): ";
    cin >> height;
    cout << "Enter your weight (in kg): ";
    cin >> weight;
    // converting cm to m
    height = height / 100;
    // calculating bmi
    bmi = weight / (height*height);

    cout << "Your BMI(in kg/m^2) is " << bmi << endl;

    if (bmi < 18.5){
        cout << "You are underweight." << endl;
    }
    else if (bmi >= 18.5 && bmi <= 24.9){
        cout << "Your weight is normal." << endl;
    }
    else if (bmi >= 25 && bmi <= 29.9){
        cout << "You are overweight." << endl;
    }
    else if (bmi >= 30 && bmi <= 39.9){
        cout << "You are obese." << endl;
    }
    else if (bmi >= 40){
        cout << "You are morbidly obese." << endl;
    }

    return 0;
}
