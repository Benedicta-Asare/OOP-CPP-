#include <iostream>
#include <list>
using namespace std;

class YoutubeChannel{
private:
    string Name;
    string OwnerName;
    int SubscriberCount;
    list<string>PublishedVideoTitles;

public:
    YoutubeChannel(string name, string ownerName){
        Name = name;
        OwnerName = ownerName;
        SubscriberCount = 0;
    }

    void Subscribe(){
        SubscriberCount++;
    }

    void Unsubscribe(){
        if (SubscriberCount > 0){
            SubscriberCount--;
        }
    }

    void set_name(string name){
        Name = name;
    }

    string get_name(){
        return Name;
    }

    void PublishVideo(string videoTitle){
        PublishedVideoTitles.push_back(videoTitle);
    }

    void GetInfo(){
        cout << "\nName: " << Name << endl;
        cout << "Owner Name: " << OwnerName << endl;
        cout << "Number of Subscribers: " << SubscriberCount << endl;
    }
};

int main(){
    YoutubeChannel ytChannel("Daily Dose", "Bella Rose");
    ytChannel.PublishVideo("Mastering the Art of Photography: Tips and Tricks");
    ytChannel.Unsubscribe();
    ytChannel.GetInfo();

    for (int i=0; i<20; i++){
        ytChannel.Subscribe();
    }
    ytChannel.GetInfo();

    return 0;
}

