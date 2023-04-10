//find the average of numbers in an array
#include <iostream>
using namespace std;

int main(){
    int n;
    float numbers[n];
    float *ptr = numbers;
    float sum = 0.0f;
    float average;

    cout << "\nHow many numbers do you want to enter? ";
    cin >> n;

    for (int i = 0; i < n; i++){
        cout << "Enter number " << i+1 << ": ";
        cin >> *(ptr + i);
        sum += *(ptr + i);
    }
    average = sum / n;
    cout << "The average is " << average << endl;
    return 0;
}