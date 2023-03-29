//function to generate the Fibonacci sequence up to a given number
#include <iostream>
using namespace std;

void fibonacci(int n){
    int num1 = 0,num2 = 1,next_term = 0;
    
    cout << "Fibonacci sequence: " << num1 << "," << num2;

    next_term = num1 + num2;
    while(next_term <= n){
        cout << "," << next_term;
        num1 = num2;
        num2 = next_term;
        next_term = num1 + num2;
    }
}    
int main(){
    int n;
    cout << "Enter a positive number: ";
    cin >> n;
    fibonacci(n);

    return 0;
}