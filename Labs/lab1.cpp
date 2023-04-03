#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //Declaring variables
    int a = 17785;
    string text = "Welcome to this class";
    float b = -56.1427;
    string c = "5262778y";
    int x = 5, y = 5, z = 5;
    bool d = true;
    string name[10] = {"Kofi", "Ama"};


    //Finding the birth year of a user
    int age, year;
    cout << "How old are you?" << endl;
    cin >> age;
    year = 2023 - age;
    cout << "Your year of birth is " << year << endl;


    //Array
    int Marks[] = {67, 71, 54, 43, 82, 90};
    int AppliedElectricity;
    Marks[2] = 75;
    AppliedElectricity = Marks[4];


    return 0;

}
