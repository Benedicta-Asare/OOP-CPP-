#include <iostream>
using namespace std;

class tollBooth{
    private:
    unsigned int totalcars;
    double money;
    public:
    tollBooth(){
        totalcars = 0;
        money = 0;
    }
    void payingCar(){
        totalcars++;
        money +=0.50;
    }
    void nopayCar(){
        totalcars++;
    }
    void display() const{
        cout << "The total number of cars is " << totalcars <<endl;
        cout << "The total amount of money collected is " << money << endl;
    }
};

int main(){
    tollBooth booth1;
    char ch;

    cout << "Press" << endl;
    cout << "p to count a paying car" << endl;
    cout << "n to Count a nonpaying car" << endl;
    cout << "ESC to exit" << endl;
    
    while (true){
        cin >> ch;

        if(ch == 'p' or ch == 'P'){
            booth1.payingCar();
            cout << "A paying car is counted." << endl;
        }
        else if (ch == 'n' or ch == 'N'){
            booth1.nopayCar();
            cout << "A nonpaying car is counted." << endl;
        }
        else if (ch == 27){ // ESC key
            break;
        }
    }booth1.display();

    return 0;
}