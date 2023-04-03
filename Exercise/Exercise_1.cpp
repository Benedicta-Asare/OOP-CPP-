#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    
    //gallons to cubic feet conversion
    int num_of_gallons;
    const float gallons = 7.481;
    float result;
    cout << "Enter number of gallons: ";
    cin >> num_of_gallons;
    result = num_of_gallons / gallons;
    cout << "The equivalent value in cubic feet is " << result << endl;
    


    //converting temperature in degrees Celsius to degrees Fahrenheit
    float tempc, tempf;
    cout << "\nEnter temperature in degrees Celsius: ";
    cin >> tempc;
    tempf = (tempc * 1.8) + 32;
    cout << "The equivalent temperature in degrees Fahrenheit is " << tempf << endl;

    return 0;
}
