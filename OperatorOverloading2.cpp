#include<iostream>
#include<string>
#include<list>
using namespace std;

struct YouTubeChannel{
    string name;
    int subscribers;
    YouTubeChannel(string c_n, int count){
        name = c_n;
        subscribers = count;
    }
};

struct MyCollection{
    list<YouTubeChannel>mylist;
    void operator+= (YouTubeChannel& channel){
        this->mylist.push_back(channel);
    }
};

ostream& operator<<(ostream& COUT, YouTubeChannel youtubechannel){
    COUT<<"Channel: "<<youtubechannel.name<<endl;
    COUT<<"Subscribers Count: "<<youtubechannel.subscribers<<endl;
    return COUT;
}

ostream& operator<<(ostream& COUT, MyCollection& mycoll){
    for(YouTubeChannel ytc:mycoll.mylist)
        COUT<<ytc<<endl;
    return COUT;
}

int main(){
    YouTubeChannel yt1("deepmahajan70",296);
    YouTubeChannel yt2("dkte",999); 
    MyCollection mc;
    mc+=yt1;
    mc+=yt2;
    cout << mc;
    return 0;
}