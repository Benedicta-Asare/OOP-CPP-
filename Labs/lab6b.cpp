//Function to find the smallest number in a given array
#include <iostream>
using namespace std;

int min_num(int arr[],int n);
int main(){
    int numbers[5] = {15, 20, 60, 30, 5};
    cout << "The smallest number is " << min_num(numbers, 5);

    return 0;
}
int min_num(int arr[], int n){
    int min = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i] < min)
            min = arr[i];
    }
    return min;
}