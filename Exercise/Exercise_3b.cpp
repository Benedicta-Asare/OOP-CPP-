//Function that sets the smaller value of two numbers to zero
#include <iostream>
using namespace std;

void zeroSmaller(int &, int &);

int main(){
    int x, y;
    cout << "Enter First Value: ";
    cin >> x;
    cout << "Enter Second Value: ";
    cin >> y;

    zeroSmaller(x ,y);

    cout << "First Number is now " << x << endl;
    cout << "Second Number is now " << y << endl;
}
void zeroSmaller(int &a, int &b){
    if (a<b){
        a = 0;
    }
    else{
        b = 0;
    }
}