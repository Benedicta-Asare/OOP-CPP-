#include <iostream>
using namespace std;

class publication{
    private:
    string title;
    float price;
    public:
    void getdata(){
        cout << "Enter title: ";
        cin >> title;
        cout << "Enter price: ";
        cin >> price;
    }
    void putdata(){
        cout << "\nThe title is " << title << endl;
        cout << "The price is " << price << endl;
    }
};

class book: public publication{
    int pageCount;
    public:
    void getdata(){
        publication :: getdata();
        cout << "Enter number of pages: ";
        cin >> pageCount;
    }
    void putdata(){
        publication :: putdata();
        cout << "The number of pages is " << pageCount << endl; 
    }
};

class tape: public publication{
    float playingTime;
    public:
    void getdata(){
        publication :: getdata();
        cout << "Enter playing time in minutes: ";
        cin >> playingTime;
    }
    void putdata(){
        publication :: putdata();
        cout << "The playing time in minutes is " << playingTime << endl;
    }
};

int main(){
    book book1;
    tape tape1;
    cout << "\nBook" << endl;
    book1.getdata();
    book1.putdata();

    cout << "\nTape" << endl;
    tape1.getdata();
    tape1.putdata();
    return 0;
}