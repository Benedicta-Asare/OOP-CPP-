#include <iostream>
using namespace std;

class publication{
    private:
    string title;
    float price;
    public:
    virtual void getdata(){
        cout << "Enter title: ";
        cin >> title;
        cout << "Enter price: ";
        cin >> price;
    }
    virtual void putdata(){
        cout << "\nTitle: " << title;
        cout << "\nPrice: " << price;
    }
};

class book : public publication{
    private:
    int pages;
    public:
    void getdata(){
        publication :: getdata();
        cout << "Enter number of pages: ";
        cin >> pages;
    }
    void putdata(){
        publication :: putdata();
        cout << "\nPage count: " << pages;        
    }
};

class tape : public publication{
    private:
    float time;
    public:
    void getdata(){
        publication :: getdata();
        cout << "Enter time in mins: ";
        cin >> time;
    }
    void putdata(){
        publication :: putdata();
        cout << "\nPlaying time: " << time;
    }
};

int main(){
    publication* arr[100];
    char opt;
    int n = 0;

    do{
        cout << "Enter b for a book or t for tape: ";
        cin >> opt;

        if (opt == 'b' || opt == 'B'){
            arr[n] = new book;
        }
        else if (opt == 't' || opt == 'T'){
            arr[n] = new tape;
        }
        arr[n++]->getdata();
        cout << "Enter another (y/n)? ";
        cin >> opt;
    }
    while(opt == 'y');
   
    for(int i=0; i<n; i++){
        arr[i] -> putdata();
    }

    return 0;
}
