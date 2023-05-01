// A program to calculate the area of polygons(rectangle, triangle and square)
#include <iostream>
using namespace std;

class CPolygon {
protected:
 float width, height;
public:
 void set_values(){
    cout << "Enter width: "; cin >> width;
    cout << "Enter height: "; cin >> height;
 }
    virtual float area()=0;
    void printArea(){
        cout << "Area = " << this->area() << endl;
    }
};

class CRectangle : public CPolygon
{public:
    float area(){
        return width * height;
    }
};

class CTriangle : public CPolygon
{public:
    float area(){
        return width * height / 2;
    }
};

class CSquare : public CPolygon
{public:
    float area(){
        return width * height;
    }
};


int main() {
  CPolygon *arrpoly[100];
 
  int opt, n = 0;
  char ch;
 
  do {
    cout << "Choose a polygon\n";
    cout << "1. Rectangle\t2. Triangle\t3. Square\n->";
    cin >> opt;
 
    if (opt == 1) {
      arrpoly[n] = new CRectangle;
      arrpoly[n]->set_values();
      arrpoly[n]->area(); 
    } 
    else if (opt == 2) {
      arrpoly[n] = new CTriangle;
      arrpoly[n] -> set_values();
      arrpoly[n] -> area();
    }
    else if (opt == 3) {
      arrpoly[n] = new CSquare;
      arrpoly[n] -> set_values();
      arrpoly[n] -> area();
    }
    n++;
    cout << "Another polygon (y/n)? ";
    cin >> ch;
  } while (ch == 'y');
 
for(int i=0; i<n; i++){
    cout << "\nPolygon " << i+1 << endl;
    arrpoly[i] -> printArea();
}
  return 0;
}