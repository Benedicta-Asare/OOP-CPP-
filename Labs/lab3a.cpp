#include <iostream>
using namespace std;

int sum(int);

int main(){
    int n;
    cout << "Enter a positive number: ";
    cin >> n;
    cout <<"The sum of the first "<< n << " natural numbers is " << sum(n);

    return 0;
}

// find the sum of the first n natural numbers
int sum(int n){
    int total=0;
    for(int i=1; i<=n; i++){
        total += i;
    }
    return total;
}