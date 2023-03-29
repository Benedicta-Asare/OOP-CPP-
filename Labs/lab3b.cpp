//convert height from cm to ft
#include <iostream>
using namespace std;

inline float funct(float cm){
    return cm * 0.0328084;
}

int main(){
    float cm;
    cout << "Enter your height in cm: " << endl;
    cin >> cm;

    cout << "Your height in ft is "<< funct(cm);

    return 0;
}