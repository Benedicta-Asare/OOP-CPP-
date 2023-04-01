#include <iostream>
using namespace std;

class Quadrilateral{
private:
    int x, y;
public:
    void set_values(int a, int b){
        x = a;
        y = b;
    }
    void area(){
        int area;
        area = x * y;
        cout << "area = " << area << endl;
    }
};
int main(){
    Quadrilateral square, rectangle;
    square.set_values(10, 10);
    rectangle.set_values(5, 10);
    square.area();
    rectangle.area();

    return 0;
}